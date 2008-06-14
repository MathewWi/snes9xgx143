/****************************************************************************
 * Gamecube Input
 *
 * Use JOY1 and JOY2
 *
 * softdev - November 2005
 ****************************************************************************/

#include <gccore.h>
#include <snes9x.h>
#include <memmap.h>
#include "gcgxvideo.h"

PADStatus gcjoypads[4];
extern int ConfigRequested;

unsigned short gcpadmap[] = { PAD_BUTTON_A, PAD_BUTTON_B, PAD_BUTTON_X, PAD_BUTTON_Y,
    PAD_BUTTON_UP, PAD_BUTTON_DOWN, PAD_BUTTON_LEFT, PAD_BUTTON_RIGHT,
    PAD_BUTTON_START, PAD_TRIGGER_Z, PAD_TRIGGER_R, PAD_TRIGGER_L };

unsigned int snespadmap[] = { SNES_A_MASK, SNES_B_MASK, SNES_X_MASK, SNES_Y_MASK,
    SNES_UP_MASK, SNES_DOWN_MASK, SNES_LEFT_MASK, SNES_RIGHT_MASK,
    SNES_START_MASK, SNES_SELECT_MASK, SNES_TR_MASK, SNES_TL_MASK };

int SaveTheSRAM(int mode, int slot, int type);
extern int ChosenSlot;
extern int ChosenDevice;
extern int autoSaveLoad;

/****************************************************************************
 * Convert GC Joystick Readings to JOY
 *
 * SNES has the following buttons
 * Up/Down/Left/Right
 * A/B/X/Y
 * LEFT/RIGHT SHOULDERS
 ****************************************************************************/
unsigned int DecodeJoy( unsigned short p )
{
    unsigned int J = 0;
    int i;

    for ( i = 0; i < 12; i++ ) {
        if ( p & gcpadmap[i] )
            J |= snespadmap[i];
    }

    return J;
}

/****************************************************************************
 * V 1.0.1
 * 
 * Additional check for Analog X/Y
 ****************************************************************************/
int PADCAL = 40;

unsigned int GetAnalog( int Joy )
{

    signed char x,y;
    unsigned int i = 0;

    x = PAD_StickX(Joy);
    y = PAD_StickY(Joy);

    if (x * x + y * y > PADCAL * PADCAL) {

        if (x > 0 && y == 0) return SNES_RIGHT_MASK;
        if (x < 0 && y == 0) return SNES_LEFT_MASK;
        if (x == 0 && y > 0) return SNES_UP_MASK;
        if (x == 0 && y < 0) return SNES_DOWN_MASK;

        if ((float)y / x >= -2.41421356237 && (float)y / x < 2.41421356237) {
            if (x >= 0)
                i |= SNES_RIGHT_MASK;
            else
                i |= SNES_LEFT_MASK;
        }

        if ((float)x / y >= -2.41421356237 && (float)x / y < 2.41421356237) {
            if (y >= 0)
                i |= SNES_UP_MASK;
            else
                i |= SNES_DOWN_MASK;
        }
    }

    return i;
}

bool8 S9xSetSoundMute (bool8 mute);
unsigned int GetJoys(int which)
{
    unsigned int joypads;
    signed char px;

    /*** Check for menu, CStick left, Z+R, or L+R+X+Y ***/
    px = PAD_SubStickX (0);
    if ( (px < -PADCAL) || (PAD_ButtonsHeld(0) ==
        ( PAD_TRIGGER_L  | PAD_TRIGGER_R | PAD_BUTTON_X | PAD_BUTTON_Y ))) {
        if (autoSaveLoad && Memory.SRAMSize) {
            Settings.Paused = TRUE;
            S9xSetSoundMute(TRUE);
            SaveTheSRAM(1,ChosenSlot,ChosenDevice);
            Settings.Paused = FALSE;
            S9xSetSoundMute(FALSE);
        }
        ConfigRequested = 1;
    }
    if (PAD_ButtonsHeld(0) == (PAD_TRIGGER_Z | PAD_TRIGGER_R))
        ConfigRequested = 1;

    joypads = 0;

    joypads = DecodeJoy( PAD_ButtonsHeld(which) );
    joypads |= GetAnalog(which);

    return joypads;
}

