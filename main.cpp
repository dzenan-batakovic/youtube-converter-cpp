#include <string>
#include <iostream>
#include <windows.h>
#include "converter.h"

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    std::string url = "";

    int format = 0;

    std::cout << "[INFO]: Preverjam povezavo z internetom...\n";
    if (!preveriInternet()) {
        std::cout << "\n==================================================\n";
        std::cout << "[SISTEM]: Nisi povezan na internet!\n";
        std::cout << "Preveri svojo Wi-Fi ali LAN povezavo in poskusi znova.\n";
        std::cout << "==================================================\n\n";
        std::system("pause");
        std::system("CLS");
        return 0; 
    }
    std::cout << "[OK]: Internetna povezava je stabilna. Lahko nadaljujeva.\n\n";
    

while (true) {
    std::cout << "██╗   ██╗████████╗     ██████╗ ██████╗ ███╗   ██╗██╗   ██╗███████╗██████╗ ████████╗███████╗██████╗ \n";
    std::cout << "╚██╗ ██╔╝╚══██╔══╝    ██╔════╝██╔═══██╗████╗  ██║██║   ██║██╔════╝██╔══██╗╚══██╔══╝██╔════╝██╔══██╗\n";
    std::cout << " ╚████╔╝    ██║       ██║     ██║   ██║██╔██╗ ██║██║   ██║█████╗  ██████╔╝   ██║   █████╗  ██████╔╝\n";
    std::cout << "  ╚██╔╝     ██║       ██║     ██║   ██║██║╚██╗██║╚██╗ ██╔╝██╔══╝  ██╔══██╗   ██║   ██╔══╝  ██╔══██╗\n";
    std::cout << "   ██║      ██║       ╚██████╗╚██████╔╝██║ ╚████║ ╚████╔╝ ███████╗██║  ██║   ██║   ███████╗██║  ██║\n";
    std::cout << "   ╚═╝      ╚═╝        ╚═════╝ ╚═════╝ ╚═╝  ╚═══╝  ╚═══╝  ╚══════╝╚═╝  ╚═╝   ╚═╝   ╚══════╝╚═╝  ╚═╝\n\n";
    std::cout << "===== Developed by Batakk29 (v1.1) =====\n\n";

    std::cout << "Prilepi Youtube URL (ali pa vpiši 'q' za izhod): ";
    std::cin >> url;

    std::string preverjanjeIzhoda = url;
    for (char &c : preverjanjeIzhoda) {
        c = std::tolower(c);
    }

    if (url == "q" || url == "exit") {
        std::cout << "\nHvala za uporabo! Zapiram program...\n";
        break; 
    }

    std::cout << "\nV katerem formatu želite pretvoriti?\n";
    std::cout << "[1] MP4 (Video)\n";
    std::cout << "[2] MP3 (Glasba)\n";
    std::cout << "Izberi: ";
    std::cin >> format;

    std::cout << "\n[SISTEM]: Odpiram okno za izbiro ciljne mape za shranjevanje...\n";
    std::string pathSave = izberiMapo();


    if (pathSave.empty()) {
        std::cout << "\n[SISTEM]: Nisi izbral mape, program se bo zaprl...\n";
        std::system("PAUSE");
        return 0;
    }

    std::cout << "[SISTEM]: Datoteka bo shranjena v: " << pathSave << "\n";


    if (format == 1) {
        prenesiVideo(url, pathSave);
    }
    else if (format == 2) {
        prenesiAudio(url, pathSave);
    }
    else {
        std::cout << "[SISTEM]: Izbral si neobstoječo možnost!\n";
    }

    std::cout << "\n==================================================\n";
    std::cout << "                POSTOPEK KONČAN!                  \n";
    std::cout << "==================================================\n\n";

    std::system("PAUSE");
    std::system("CLS");
}




return 0;    
}