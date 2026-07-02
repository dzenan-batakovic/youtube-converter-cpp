# YouTube Video & MP3 Converter
> **Zadnje ažuriranje:** 02.7.2026 | **Verzija:** v1.0.0

Ova C++ aplikacija omogućuje koristicima Windows operacijskog sustava za brzo i jednostavno preuzimanje videozapisa s YouTuba u MP3 ili MP4 formatu visoke kvalitete. Projekt uključuje i instalacijski paket za jednostavnu instalaciju na Windows sustavima.



# Značajke (Features)
* Preuzimanje videa u maksimalnoj dostupnoj kvaliteti (MP4).
* Konverzije i ekstrakcija zvuka direktno u MP3.
* Čista i optimizirana C++ arhitektura.
* Interirana podrška za 'yt-dlp' i 'ffmpeg'.
* Uključen Inno Setup installer za brzu instalaciju.

## Korištene Tehnologije
* **Jezik:** C++
* **Alati:** yt-dlp, ffmpeg
* **Pakiranje:** Inno Setup Compiler

# Ostalo
* Aplikacija je napisana u engleskom jeziku, a u budućim verzijama to će biti ispravljeno na odabir korisnika.



## Kako Pokrenuti Projekt
Da biste pokrenuli projekat lokalno, potrebno je imati instaliran C++ kompajler (poput MinGW/GCC) te 'yt-dlp' i 'ffmpeg' binarnosti u putanji sustava (same file).

# Kloniranje Repozitorija
git clone "https://github.com/dzenan-batakovic/youtube-converter-cpp.git"

# Ulazak u mapu
cd youtube-converter-cpp

g++ main.cpp converter.cpp -o "YT Converter.exe" -static -static-libgcc -static-libstdc++ -lcomdlg32 -lwininet