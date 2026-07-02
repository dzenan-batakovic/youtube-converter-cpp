#include "converter.h"
#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <wininet.h>
#include <shlobj.h>


bool preveriInternet() {
    DWORD zastavice;
    // Funkcija poskusi pogledati, če obstaja kakšna aktivna povezava (LAN, Wi-Fi, modem)
    return InternetGetConnectedState(&zastavice, 0);
}

std::string izberiMapo() {
    char pot[MAX_PATH] = "";
    
    BROWSEINFOA bi = { 0 };
    bi.lpszTitle = "Izberi mapo za shranjevanje:";
    bi.ulFlags = BIF_RETURNONLYFSDIRS | BIF_NEWDIALOGSTYLE;
    
    LPITEMIDLIST pidl = SHBrowseForFolderA(&bi);
    
    if (pidl != 0) {
        SHGetPathFromIDListA(pidl, pot);
        
        IMalloc* imalloc = 0;
        if (SUCCEEDED(SHGetMalloc(&imalloc))) {
            imalloc->Free(pidl);
            imalloc->Release();
        }
        return std::string(pot);
    }
    return "";
}

void prenesiVideo(std::string url, std::string pathSave) {
    std::string ukaz = "yt-dlp.exe --extractor-args \"youtube:player_client=android,web_embedded\" -f \"bv*[ext=mp4]+ba[ext=m4a]/b[ext=mp4]\" -o \"%(title)s.%(ext)s\" -P \"" + pathSave + "\" \"" + url + "\"";
    std::cout << "\n[SISTEM]: Začenjam prenos videa (MP4). Prosim počakaj...\n";
    std::system(ukaz.c_str());
}

void prenesiAudio(std::string url, std::string pathSave) {
    std::string ukaz = "yt-dlp.exe --extractor-args \"youtube:player_client=android,web_embedded\" -x --audio-format mp3 --audio-quality 0 -o \"%(title)s.%(ext)s\" -P \"" + pathSave + "\" \"" + url + "\"";
    std::cout << "\n[SISTEM]: Začenjam prenost in pretvorbo v glasbo (MP3). Prosim počakaj...\n";
    std::system(ukaz.c_str());
}