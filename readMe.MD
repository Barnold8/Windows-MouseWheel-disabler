# About 

This software just simply disables the scroll wheel on a system wide scale. I made this because my scroll wheel is broken and it gets VERY annoying in video games accidentally changing something by accident or web browsing just trying to read a page normally. This does ***NOT*** disable the click feature of the mouse wheel (mouse 3). 

This can be made into a service using [nssm](https://nssm.cc/)


# How to install

This project requires [Visual studio](https://visualstudio.microsoft.com/) to use the [CL](https://learn.microsoft.com/en-us/cpp/build/reference/compiler-options?view=msvc-170) compiler. If you already have this compiler elsewhere then [Visual studio](https://visualstudio.microsoft.com/) is not needed. All you need to do is compile with [CL](https://learn.microsoft.com/en-us/cpp/build/reference/compiler-options?view=msvc-170) and then you have the program!


[CL](https://learn.microsoft.com/en-us/cpp/build/reference/compiler-options?view=msvc-170) is needed to stop the console window from showing up when running this software. This is only possible using the [wWinMain](https://learn.microsoft.com/en-us/windows/win32/learnwin32/winmain--the-application-entry-point) entry point function, which requires [CL](https://learn.microsoft.com/en-us/cpp/build/reference/compiler-options?view=msvc-170). 

