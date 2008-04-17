�����������������������������������������������������������������������������
:::::::::::::::�::::::::::::   .______   :::::::::::::::::::   _   ::::::::::
|        _________            /   ___�/           -------.    (_)'\ /     `�|
�       /______ �   ---__---./   /___ _________  /  ---  /    __| / \      ��
�      _______\ \ /  ___  //  /____//\_____ �  /---/   / ___    ---         �
|     �________/ /  / /  //  /__    _______\ \    /   /  \  \  / /        .||
::::::::::::::::/   /::--/_______\::.________/::::/   /:�::\   _  \::::::�:::
:::::::�:::::::/___\:::::::::::::::::::::::::::::/   /::::/__/   \--::�::::::
�:::::::::::::::::�:::::::::::::::�::::�:::::::::\--/::::::::::::::::::�:::::
��������������������������������������������������������������������������rK�

ח����������� ������������������������������ �����������������������-����-���
|0O��o�                  SNES9X v1.43 - GX Edition 0.0.4x             �o��O0|
`������� ���������������� ��������������� �������������������� �������������'

Welcome to the revolution in GameCube emulators! SNES9X is by far the most
complete and accurate Super Nintendo Entertainment System emulator to date.
Taking full power of the ATi-GX chipset and packed full of features that are
to die for after playing your games you'll never want to come back to
reality.

SNES9X is a very popular open source emulator mainly for the PC platform, but
has seen many ports to other consoles such as the Nintendo DS, Microsoft XBOX
and now thanks to SoftDev the Nintendo GameCube! This is a straight port and
is not based on any previous SNES emulators that have existed for the
GameCube. You can get more information on SNES9X here from the below URL.
http://snes9x.ipherswipsite.com/

[ What's New ]

* XenoGC Support (GC-Linux Homebrew DVD Compatibility)

[ Features ]

* Port of SNES9X v1.43
* Fullscreen Graphics
* Sound Emulation
* SRAM Manager
* DVD Loading
* 1-4 Player Support
* Mode 7 Supported
* Super FX Supported
* SDD1, SRTC, SA-1 Supported
* DSP1 & DSP2 Supported
* Partial DSP4 Support
* Supports Hi-Res 512x224 screens
* Joliet Browser
* PAD Configuration saved with SRAM
* Memcard save/load time extended
* Partial Zip support
* Crude Timer
* Sound Sync Option
* Analog Clip

ח����������� ������������������������������ �����������������������-����-���
|0O��o�                        PARTIAL PKZIP SUPPORT                  �o��O0|
`������� ���������������� ��������������� �������������������� �������������'

The Zip support in the emulator is courtesy of the zlib library. Currently,
it supports only the Inflate method.

The good news is that this is by far the most common zip method!

You should note also that this implementation assumes that the first file
in each archive is the required rom in smc/fig format.

In an attempt to save you time, we recommend using 7-Zip as the compressor,
as it gives a gain of 5-25% better compression over standard zips.

To use 7-Zip compression on either linux or windows, use the following,

  7za a -tzip -mx=9 myrom.zip myrom.smc

ח����������� ������������������������������ �����������������������-����-���
|0O��o�                         SETUP & INSTALLATION                  �o��O0|
`������� ���������������� ��������������� �������������������� �������������'

Unzip the archive into a folder with at least one SNES ROM image. Images must
be in the Super Magicom (SMC) or FIG format. Generally, all images you find
will be in this format, but if you run across one that isn't please download
RTOOL which will allow you to convert the image into SMC format.

After this you're going to need to inject a ROM image into the emulator
before you can get it up and running. To be fair to everyone including those
of you who do not have a spare DVD we've adopted this approach.

SNESGX supports ROM images up to 8Mb (64 megabit) from DVD, or 4Mb (32 megabit)
in a dol, so you shouldn't have to worry about what size the games are before you
load them, but since the saving and loading of your progress is based on the
internal ROM name (header) itself you may want to check to see if the ROM header
is intact, but don't worry about this as most ROM images have correct headers.

Next, for all you non-commandos out there here is a quick guide on how to
create the initial DOL (GameCube Executable File) you will need to load on
your system. If you're already familiar with the Command Line Interface (CLI)
simply skip to step 6. Note when I use '' to only type what is in between
them.

  (1) Unzip archive into c:\snes\
  (2) Put GAME.SMC into c:\snes\
      GAME.SMC can be any game you want
  (3) Click on the START MENU then RUN and type in 'CMD' and press ENTER
  (4) Type 'C:' press ENTER
  (5) Type 'CD\SNES' press ENTER
  (6) Type 'sgxi.exe GAME.SMC GAME.DOL' press ENTER

Now you will have a GAME.DOL file which you can burn onto a DVD and/or stream
to your GameCube. If you're unfamiliar with streaming and/or burning a DVD
please refer to the Mod That Cube -FAQ- for further instructions.

  http://modthatcube.pxn-os.com

ח����������� ������������������������������ �����������������������-����-���
|0O��o�                              MAIN MENU                        �o��O0|
`������� ���������������� ��������������� �������������������� �������������'

Once the DOL file is loaded you will be presented with the configuration
screen where you can adjust many options before you start the gameplay.
Additionally, if at any time your heart desires to alter these options, save
your game or load a new ROM image simply press the Z and the left trigger
button (at the same time) and you'll be brought back to this menu.

To leave the options at their default and continue to play the game simply
press the 'A' button and enjoy!

ח����������� ������������������������������ �����������������������-����-���
|0O��o�                            CONFiGURATION                      �o��O0|
`������� ���������������� ��������������� �������������������� �������������'

To load the configuration menu press Z + LEFT TRIGGER at the same time and
you can save/load you current progress, load a new game from DVD and/or tweak
the emulators options.

Save Game Manager

  Will bring you into the management system where you can Save or Load your
  current game progress. You may SAVE you game progress at any time, but when
  loading your SAVE please reload your game, load your SAVE and then play the
  game. If you try loading your SAVE after the game starts you may run into
  some nasty problems.

Load New ROM

  If you're tired of playing your current game pick this option
  so you can browse the current DVD in the GameCube and select a new game to
  play.

Pad Configuration

  Don't like the way the controller is setup (mapped)? Simply pick this
  option and you can chose which button does what.

Emulator Options

  Here you can tweak some of the internal Snes9x emulator options

  Sound Echo

    Will add a pseudo echo effect to all sounds creating a more
    in depth gameplay experience.

  Reverse Stereo

    Change the audio output from LEFT and RIGHT to RIGHT and LEFT.

  Transparency

    Some games, such as Terranigma (a great role playing game only
    released in the United Kingdom) include transparency effects. Use this
    option to turn these off or on.

  FPS Display

    This option will display the Frames Per Second (FPS) in the bottom left
    hand corner so you can see how accurate the graphics are being displayed
    on the screen.

  Sound Sync

    Snes9x allows for synchronising the sound with the emulator speed.

  Timer

    The original timing in Snes9x is based on the vertical blank counter.
    You now also have the option to use a crude clock timer, which may help
    playing PAL50 on a 60hz output.

  Reset Emulator

    Perform a soft-reset on the Snes9x core.

PSO/SD Reload

  If you're using Phantasy Star Online (PSO) or SD-Load (SD) to boot SNESGX
  from then you can use this option to go back to the loading menu to select
  another GameCube executable (DOL/ELF) file to load.

View Credits

  You can view the credits for the emulator. The credits can also be viewed
  at the end of this document.

ROM Information

  Here you can double check the ROM information. If SRAM == 0, you have no
  save available.

Stop DVD Motor

  As it says, once you know you're in for the long haul, save your drive
  motor by switching it off

ח����������� ������������������������������ �����������������������-����-���
|0O��o�                               CREDITS                         �o��O0|
`������� ���������������� ��������������� �������������������� �������������'

                                  Technical Credits

                            Snes9x v1.4.3 - Snes9x Team
                              GameCube Port - SoftDev
                            GX - http://www.gc-linux.org
                                  Font - Qoob Team
                                  libogc - Shagkur


                                      Testing
                           mithos / luciddream / softdev


                                     Greets To
                           HonkeyKong . Shagkur . Cedy_NL
                             Raz` . Scognito . Brakken


                                   Documentation
                                      brakken

ח����������� ������������������������������ �����������������������-����-���
|0O��o�                          TECHNICAL NOTATIONS                  �o��O0|
`������� ���������������� ��������������� �������������������� �������������'

The Snes9X program normally expects to have constant access to a hard drive,
to write out the SRAM data at a user specified interval. As we don't have
this luxury on the Gamecube, the onus is in the user to save at regular
intervals.

We've been working closely with shagkur (libogc author) to track down the
problems in the memcard functions.

This release now has 24-7 memcard access for most users. Indeed, the test
team have left a gamecube running for two days to ensure that the card
still functions and saves/loads as expected.

We can't use the latest WIP, as this breaks a lot of other things - so the
source release includes the changes we made to libogc. You use those at
your own risk !

ח����������� ������������������������������ �����������������������-����-���
|0O��o�                           SAVE GAME NOTES                     �o��O0|
`������� ���������������� ��������������� �������������������� �������������'

Due to the fact that Options (Sound Echo, Stereo Reverse, Transparancy, FPS)
and PAD Configuration now is included in gamesave you need to configure PAD
Controls and check the user options after loading a Snes9x GX 0.0.1 - 0.0.2
savegame in Snes9x GX 0.0.4 for the first time.

ח����������� ������������������������������ �����������������������-����-���
|0O��o�                   SNES9X v1.43 - GX Edition 0.0.4             �o��O0|
`������� ���������������� ��������������� �������������������� �������������'
