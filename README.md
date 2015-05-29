# VT100-Terminal-Library-Xilinx-SDK
Xilinx SDK Library to simplify the use of VT100 Terminal Escape Codes

-----------------------------------

##Overview
This library is designed to be installed into the Xilinx SDK, and enables the use of ANSI/VT100 escape codes in a serial terminal.  This library is board / device agnostic, because it simply sends codes via the serial port to the connected terminal.

This library was created using the the [Xilinx Vivado 2015.1 tools](http://www.xilinx.com/support/download.html), but is likely to be forwards and backwards compatible with other versions.

##VT100 History

The VT100 is a video terminal, introduced in August 1978 by Digital Equipment Corporation (DEC). It was one of the first terminals to support ANSI escape codes for cursor control and other tasks, and added a number of extended codes for special features like controlling the LED lamps on the keyboard. This led to rapid uptake of the ANSI standard, becoming the de facto standard for terminal emulators.

The VT100s, especially the VT102, was extremely successful in the market, and made DEC the leading terminal vendor for some time. The VT100 series was replaced by the VT200 series starting in 1983, which proved just as successful. Ultimately, over six million terminals in the VT series would be sold, based largely on the success of the VT100s.

The VT100 was introduced in August 1978, replacing the VT50/VT52 family. Like the earlier models, it communicated with its host system over serial lines using the ASCII character set and control sequences. Unlike the VT52's custom control sequences, the VT100 used sequences standardized by ANSI. The VT100 was also the first Digital mass-market terminal to incorporate "graphic renditions" (blinking, bolding, reverse video, and underlining) as well as 80 or 132 column displays. The VT100 also introduced an additional character set containing various bits of graphics that allowed the drawing of on-screen forms. All setup of the VT100 was accomplished using interactive displays presented on the screen; the setup data was stored in non-volatile memory within the terminal.

The control sequences used by the VT100 family are based on the ANSI X3.64 standard, also known as ECMA-48 and ISO/IEC 6429. These are sometimes referred to as ANSI escape codes. The VT100 was not the first terminal to be based on X3.64—The Heath Company had a microprocessor-based video terminal, the Heathkit H-19 (H19), that implemented a subset of the standard proposed by ANSI in X3.64. In addition, the VT100 provided backwards compatibility for VT52 users, with support for the VT52 control sequences.

*(Reference: [Wikipedia Page - VT100](https://en.wikipedia.org/wiki/VT100))*


##VT100 Terminal Emulation
Many modern terminal applications / plugins now support the VT100 graphics renditions, including the terminal supplied within the Xilinx (Eclipse) SDK.  Another popular terminal supporting VT100 is the [TeraTerm](http://ttssh2.osdn.jp/) application.

The supplied library is designed to remove the requirement for the user to remember and type complex VT100 Escape codes during software development, providing instead a series of C Function Macros to simplify the use of VT100 escape codes.


##Example Library Function Calls

<pre>
// Text colouring
VT100_Black_Text();
VT100_Red_Text();
VT100_Green_Text();

// Text background
VT100_Black_Background();
VT100_Red_Background();
VT100_Green_Background();

// Cursor Positioning
VT100_Cursor_Home();
VT100_Cursor_Set_XY_Position(X,Y);
VT100_Cursor_Up(Rows);
VT100_Cursor_Down(Rows);
VT100_Cursor_Left(Columns);
VT100_Cursor_Right(Columns);

// Text attributes
VT100_Text_Attributes_None();
VT100_Text_Attributes_Bold();
VT100_Text_Attributes_Dim();
VT100_Text_Attributes_Blink();
</pre>


## Installing the library
Installing custom software libraries in the Xilinx SDK is a simple task, but the directory structure is critical.  Libraries are often required for use across many different projects, and therefore it is advisable to create a directory on your PC which is accessible by many different Vivado / SDK projects.   If the library is required by multiple users, this folder could be created on a network drive.  In the case of this example, we shall create a custom IP directory at:
<pre>
C:\custom_xilinx_ip\
</pre>

The path beneath that location is the critical piece of the puzzle and must be:

<pre>
\MyProcessorIPLib\sw_services\(name_of_the_library)\
</pre>

Therefore, for the supplied library, the full installation path would be:

<pre>
C:\custom_xilinx_ip\MyProcessorIPLib\sw_services\VT100_v1_0
</pre>

Once the files are in the correct location, the Xilinx SDK (Eclipse) must be configured to point to this custom IP repository.  This is achieved as follows:

- Open the in the SDK Preferences using the menus, "Window -> Preferences".
- Navigate to the "Xilinx SDK -> Repositories" settings.
- In the "Global Repositories" section, click "New..." and then browse to the location of your custom IP directory (e.g. `c:\custom_xilinx_ip`).
- Click the "Apply" button.
- Click the "Rescan Repositories" button.
- Click "OK" to close the preferences window.

*Please see the supplied screenshots for further guidance*


## Using the VT100 library with a BSP
To make the VT100 library available in a Xilinx SDK BSP:

- Right click on the BSP in the Project Explorer and choose "Board Support Package Settings".
- In the list of supported libraries, tick the "VT100" library.
- Click "OK".
- The BSP will be automatically recompiled and the VT100 library will be included in the sources.

*Please see the supplied screenshots for further guidance*

## Contributions
Code examples are provided for your use, but please feel free to contribute your own code back to this repository via a pull request in the usual fashion.  Please fork from this repo, then create a suitably named branch in your fork before submitting back to this repo.  Please don't submit a pull request from your "master" branch.  Each new addition to the code should belong to its own submitted branch.  Thanks. 


