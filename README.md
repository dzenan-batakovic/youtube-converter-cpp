# YouTube Video & MP3 Converter
> **Last Update:** 13.7.2026 | **Version:** v1.0.0

This C++ CLI application enables Windows operating system users a reliable, high quality, no pop-up ads and a lightning fast download of youtube content in either .mp4 or .mp3 format. This application is a great solution for content creators, video ediors who have to download a lot of youtube content on their PC fast with no fake ads and antivirus popups from wither malware or false positives. 



## Features
* Downloading video content in maximum available quality (MP4).
* Conversion and extracting audio directly into MP3 format.
* Clean and optimised C++ architechture.
* Intergrated support for 'yt-dlp' and 'ffmpeg'.

## Used Technology
* **Programming Language:** C++
* **Tools:** yt-dlp, ffmpeg, Visual Studio Code, MinGW
* **Pakiranje:** MinGW (G++/GCC) ,Inno Setup Compiler (for the whole installer OPTIONAL!)

## Other
* Applications user interface is primarily in slovenian language but it will get translated into English in the future.



# How to launch/start the project
To launch the project and use it locally you first have to clone it and compile it to .exe using your compiler (G++/GCC) and have 'yt-dlp' and 'ffmpeg' included in the same directory as the final output executable.

## Repository Cloning
git clone https://github.com/dzenan-batakovic/youtube-converter-cpp.git

## Getting into the folder
cd youtube-converter-cpp

## Compiler Command
g++ main.cpp converter.cpp -o "YT Converter.exe" -static -static-libgcc -static-libstdc++ -lcomdlg32 -lwininet

## Reminders
The application will not work correctly if you are not connected to the internet or if any of the needed .exe programs are missing ('yt-dlp' and 'ffmpeg')