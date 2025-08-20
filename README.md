# Setup af C/C++ Compiler, Visual Studio Code og Arduino

- **PowerPoint slideshow**: 
  - Læse rækkefølge:
    1. Setup Operativsystem:
      - `Setup MacOS.pptx` (Læs den der passer til dig først)
      - `Setup Windows.pptx` (Læs den der passer til dig først)
    2. `Setup.pptx`
- **setup_questions.docx** – `Indeholder spørgsmål som i får i forbindelsen med forlæsningen.`
- **files/** - `En mappe som indeholder filer i skal bruge i forbindelse med forlæsningen.`
---

Denne kursusgang er 100% praktisk orienteret.
- Kursusgangen består af at hjælpe dem som ikke kunne sætte deres maskiner op til at benytte hhv. 
  - C compiler
  - Installerer en IDE til både normale C programmer samt ESP32
  - Installation af usb-drivers (MacOS, samt en masse andet kun I skal huske på)

Kursusgangen er delt op i en windows del, og en mac del.
Slides til kursusgangen indeholder opgaver, som er delt op i en lokal compiler del, samt online compiler del.
Hvis man er gået fast i installations-processen.

## ​ Usage

2. Clone it locally:
   ```bash
   git clone https://github.com/AAU-ST1-Programming/setup.git
   cd setup

## Forberedelse

Inden kursusgangen SKAL I have opdateret jeres maskiner til seneste operativ system. i.e. Windows 10/11 og macOS 15 Ventura eller nyere.
Ældre systemer virker muligvis, men dette kan ikke garanteres, og vi vil ikke kunne hjælpe før dette er gjort!

Inden kursusgangen skal i have anskaffet jer en ESP32, som I blev informeret om.

I inden kursusgangen har installeret kompiler og IDE. Herunder ses en guide til hvordan dette kan gøres.

Fremgangsmåde: Læs og følg guilden for hhv Mac og Windows
MacOS: Anvendt Programmering 02 Setup macos.pdf
Windows: Anvendt Programmering 02 Setup Windows.pdf


**video order Windows:**
- [Installation_windows](https://panopto.aau.dk/Panopto/Pages/Viewer.aspx?id=18464e63-ca15-4b7c-9b78-b332008ab859)
- [installation_windows_USB_driver](https://panopto.aau.dk/Panopto/Pages/Viewer.aspx?id=497b4d5f-ef65-40aa-b878-b332008ab7e3)
- [install_vscode](https://panopto.aau.dk/Panopto/Pages/Viewer.aspx?id=91bb1191-5163-4abe-a522-b332008ab839)
- [install_arduino](https://panopto.aau.dk/Panopto/Pages/Viewer.aspx?id=3d007db6-3388-4f43-b252-b2dc00b792a4&start=0)

**video order MacOS:**
- [Installation_macos](https://panopto.aau.dk/Panopto/Pages/Viewer.aspx?id=e41dd984-f7cf-4136-b7f7-b332008ab7b3)
- [installation_USB_driver](https://panopto.aau.dk/Panopto/Pages/Viewer.aspx?id=1ca4402e-29d8-46df-b42e-b332008ab794)
- [install_vscode](https://panopto.aau.dk/Panopto/Pages/Viewer.aspx?id=91bb1191-5163-4abe-a522-b332008ab839)
- [install_arduino](https://panopto.aau.dk/Panopto/Pages/Viewer.aspx?id=3d007db6-3388-4f43-b252-b2dc00b792a4&start=0)

**Opgave Besvarelses Videoer**
- [Hello VS Code](https://panopto.aau.dk/Panopto/Pages/Viewer.aspx?id=dd70f04c-9946-401f-8e16-b332009af889)
- [Hello Variables](https://panopto.aau.dk/Panopto/Pages/Viewer.aspx?id=906715a1-fe6e-4322-b9dc-b332009e62c8)
- [Hello ESP32](https://panopto.aau.dk/Panopto/Pages/Viewer.aspx?id=697e942b-72e8-4422-a97e-b3320097584f)
- [Hello ESP32 1](https://panopto.aau.dk/Panopto/Pages/Viewer.aspx?id=70b22061-d5be-4544-9aa4-b336008eedc6)
- [Hello ESP32 2](https://panopto.aau.dk/Panopto/Pages/Viewer.aspx?id=777007ac-1a5b-4e45-ad4c-b3360090f9dd)

Til hver lektion skal man forvente følgende:

Før/efter Kursusgang:
- Gennemgang af tidligere kursusgange
  - Vi bygger altid ovenpå tidligere kursusgange
- Gennemgå nyt materiale, som vil være beskrevet i denne readme

Tiden er sat således at der vil være:

- 4 timers forberedelser (der hjemme, før undervisning)
- 4 timers undervisning og samlet opgave regning
- 4 timers individuel opgaveregning (der hjemme, efter undervisning)

## Spørgsmål noter

- Til hver opgave i undervisningen vil der være:
  - En opgave beskrivelse,
  - En guide til hvordan man udfører opgaven.
  - Svar på opgaven
- Spørgsmålene i opgaveregningen bliver generelt set mere komplicerede, 
  - De sidste opgaver er en blanding af både den nuværende kursusgang, samt tidligere kursusgange.
- Til eksamen vil der kun være en opgave beskrivelse.
  - Det vil altså være op til jer at kunne se hvordan en opgave skal løses ud fra opgave beskrivelsen.
