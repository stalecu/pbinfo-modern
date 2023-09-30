<div align="center">
  <h3 align="center">PBInfo Modern</h3>
  <a href="https://github.com/stalecu/pbinfo-modern">
    <img src="logo.png" alt="Logo">
  </a>

  <p align="center">
    Probleme de pe PBInfo, dar rezolvate in C++ și Free Pascal modern
  </p>
</div>

# Cuprins
- [Cuprins](#cuprins)
- [Introducere](#introducere)
- [Note legate de C++](#note-legate-de-c)
- [Note legate de Pascal](#note-legate-de-pascal)
  - [Cum se instalează Lazarus](#cum-se-instalează-lazarus)
  - [Turbo Pascal...](#turbo-pascal)
- [Cuvinte finale și așteptări](#cuvinte-finale-și-așteptări)


# Introducere
Te-aș minți dac-aș zice că vreau să irosesc multe cuvinte pe introducere sau c-aș vrea să fiu cîtuși de puțin formal. Tot scopul acestui repo este să ilustrez că se pot face lejer PBInfo cu C++ modern (C++11, nu „C++” de liceu care înseamnă C cu `iostream` și `fstream` să nu confrunți `printf` și `FILE*`, cmon, știu că și tu știi asta, am trecut și eu printr-un liceu de informatică intensiv info) și Free Pascal (adică nu Turbo Pascal, detaliez mai jos). 

Dacă te dezgustă intern `strtok` sau `malloc` (asta dacă ai noroc să-l știi) și te întrebi dacă există o metodă mai bună, ai venit la locul potrivit.

Dacă te cam plictisești să vezi aceleași sintagme și aceeași formatare oribilă (pentru că știu din experiență că majoritatea au boală pe spații și indentare cum are Dracula de lumină), ai venit la locul potrivit.

Dacă ai cumva hate boner pe Pascal, ești invitat/a meu/a, pentru c-o să descoperi că Pascal nu-i un limbaj așa rău și că se poate mai bine decît Turbo Pascal. Ori asta, ori înveți ceva de C++, ceea ce e bine în orice caz.

Alternativ, poți lua problemele în formă de Markdown sau să înveți ceva legat de un setup de secolul 21 (fără Code::Blocks, ideal). Oricum, am de toate pentru toți. Poate chiar și pentru profesori, în ciuda registrului colocvial anteutilizat.

# Note legate de C++
Aici este C++ idiomatic, folosesc tot arsenalul din dotare. Dacă încă folosești Turbo C++, îmi pare rău pentru tine, schimbă-te imediat la Code::Blocks. Hell, majoritatea stau pe MinGW (sau dacă ai ceva ambiție, ești mai mult decît bine-venit/ă pe Linux, ce rulez și eu).

Dac-ar fi s-o iau personal și ar fi să mă întorc pe Windows, aș folosi ori Code::Blocks, ori cel mai probabil un editor capabil (Emacs e arma care-o țin în toacă, dar merge și CLion sau Visual Studio sau un alt IDE/editor). De preferat aș instala WSL pe Windows 10/11 și aș folosi direct uneltele de Linux + un `make` pentru a rula nativ. Ai și tu DuckDuckGo, ăăăă, Google la dispoziție, ai multe opțiuni. Orice, doar nu Turbo C++.

Orice nu-i de pe vremea cărților de informatică de la Teora (din 1900 toamna) ar trebui să fie suficient, pentru că e destul de improbabil în ziua de azi să prinzi compilator care să nu știe C++11 (chiar și MSVC, compilatorul de pe Visual Studio, poate C++11). Din păcate, inima (pardon, Silviu) nu mă lasă să folosesc mai mult de C++11 pentru că am văzut că a setat standardul explicit pe C++11. Sic vita est.

Pe scurt, ori MinGW, ori Cygwin/MSYS2, orice doar să fie un compilator capabil și relativ modern (orice lansat în ultimii 12 ani), plus un editor decent (nu Notepad, Notepad++ se acceptă cu greu, să zicem că merge Code::Blocks). Dacă ai asta deja, ești acoperit/ă, pentru că Code::Blocks se pare că nu setează standardul explicit la proiecte și țin minte că e implicit pe C++11. 

În caz că trebuie instrucțiuni legate de Code::Blocks (_sper_ că ești a 9-a...):
1. File > New > Project
2. Alegi Console application și dai Next și Next
3. Alegi titlul proiectului și unde vrei să fie salvat
4. Next (aici ai treaba cu compilatorul), apoi Finish
5. În partea stîngă în tabul de Projects (dacă nu vezi nimic în stînga, du-te la View și bifează Manager sau apasă Shift+F2) selectezi Sources sub numele proiectului tău (numele proiectul activ este cu bold, așa că dacă vrei să schimbi proiectul activ, dublu clic pe numele acelui proiect) și apoi `main.cpp`
6. Selectezi main.cpp de acolo (cînd creezi proiectul, ți se va deschide automat, dar dacă schimbi proiectul nu se schimbă și acel fișier).

# Note legate de Pascal
Pascal este predat interesant aici. Nu pentru că-i cică vechi (oamenii încă fac C la școală și la universitate, deci asta nu-i argument) și Delphi încă-i foarte folosit în industrie. Dacă ești elev/ă și faci pe Pascal, ești binecuvîntat/ă de faptul că nu trebuie să faci C(++), dar nu prea pentru că tu cel mai probabil faci pe Turbo Pascal, ceea ce-i foarte rău. La fel ca în cazul celor de mai sus cu Turbo C++, mută-te imediat pe Lazarus. Lazarus este un IDE făcut pentru Free Pascal (poți face chiar și aplicații grafice în el și este foarte puternic editorul). Imaginează-ți ca un fel de Code::Blocks pentru Pascal. Aici o să trebuiască să fac un tutorial, deoarece aparent profesorii din România nu știu de acest editor. 

## Cum se instalează Lazarus 
Pasul 1 pe toate sistemele de operare este să instalezi compilatorul Free Pascal (așa cum pe partea de C++ instalezi compilatorul înainte de toate, MinGW/MSVC pe Windows și cam orice alt compilator pe Unix). În mod convenient, așa cum pentru Code::Blocks există un executabil care instalează automat și MinGW, așa există și un executabil convenient pentru a instala Lazarus și Free Pascal. Pentru Windows pe 64 de biți (ceea ce-i 99.9999%  probabil ce ai, altfel mergi pe varianta de 32 biți (fain pe XP, nu?)) poți descărca [dacă apeși pe acest link direct](https://sourceforge.net/projects/lazarus/files/Lazarus%20Windows%2064%20bits/Lazarus%202.2.6/lazarus-2.2.6-fpc-3.2.2-win64.exe/download). Se auto-extrage și e doar Next, Next, Next ad infinitum.

Aș vrea să menționez să nu instalezi în `C:\Program Files` pentru că de obicei accesul este restricționat, deci poți folosi un director precum `C:\lazarus` (care este cel implicit, dacă nu mă înșel). Încearcă să eviți în numele acestui director pe care-l alegi spații, pentru că unele unelte din Lazarus pot să fie confuze. 

Lazarus și Free Pascal se pot instala și portabil, dar asta este temă pentru acasă. ;)

După ce rulezi pentru prima oară Lazarus, o să remarci că totul este separat și nu pus împreună. Mă enervează și pe mine, știu. Uite cum rezolvi asta:
1. Te duci în meniul de sus pe Package și de acolo la Install/Uninstall Packages (cu ocazia asta vezi cu ce vine Free Pascal și ce pachete ai la dispozitie).
2. Ai două liste: una în care scrie Install, cele care se vor instala (sau care sînt instalate, mai degrabă), și cealaltă în care scrie "Available for Installation". Cauți în lista aia "anchordockingdsgn" (e printre primele rezultate), o selectezi și apoi apeși Install selection.
3. Apeși pe "Save and rebuild IDE" (după ce te asiguri că ai "anchordockingdsgn" în prima listă) și apeși Continue.
4. Aștepți să se termine procesul (Lazarus este interesant ca editor prin faptul că se recompilează la fiecare schimbare majoră). O să se restarteze și o să vezi că totul stă într-un loc (în afară de o fereastră pe care se presupune c-o umpli cu butoane and stuff). O vom ignora.
5. (Opțional) Te duci în același meniu de sus, dar la Tools și apoi la Options. O să vezi în primul dropdown (la Environment) o nouă opțiune numită "Docking / Anchordocking". De acolo, schimbi stilul în Line (implicit este Frame3D și arată urît).

Buuun, acum c-am rezolvat problema asta, o să faci procedura următoare pentru fiecare proiect:
1. Te duci la File și apoi New...
2. Selectezi de acolo din listă "Simple Program" sub Project ca să avem ceva extrem de simplu (conține doar asta):
```pascal
program Project1;

begin
end.
```
P.S.: Nu alege orice altceva pentru că ori o să fie aplicație grafică, ori ceva prea complex pentru tine (poți explora dacă n-ai ce face). 

3. Ca să-i dai nume, salvezi acest fișier într-un director la alegere, iar numele fișierului salvat fără extensia `.lpr` va determina numele programului tău. Aia e tot, acum poți scrie `WriteLn` în liniște.

## Turbo Pascal...

Pentru cei care totuși vor interfața clasică de Turbo Pascal, există `fp` care emulează venerabilul editor (cu excepția faptului că există mai multe facilități moderne). Pe Unix, ar trebui să existe deja sub `fp` în terminalul tău. Pe Windows, el se află în `$CALE\fpc\3.2.2\bin\x86_64-win64\fp.exe` (unde `$CALE` semnifică unde ai ales să instalezi Lazarus). Merge atît pe vechiul Command Prompt cît și pe noul Terminal (pe care-l recomand 1000% dacă-l poți instala, altfel folosește ConEmu pentru un terminal care nu-i antic). 

Este mai simplu procesul de a crea un proiect aici. Pentru că nu ai aplicații grafice, dacă te duci la File și New în `fp` o să fii imediat întîmpinat/ă de un fișier gol de Pascal (nici măcar umplut cu liniile de cod de mai sus).

Dacă faci Pascal la școală, cel mai probabil profesorul/profesoara tău/ta se așteaptă la Turbo Pascal (și, evident, să ruleze programele în acel editor). Nu te îngrijora, Free Pascal poate rula în mod de compatibilitate Turbo Pascal cu doar o singură directivă adăugată după `program`:

```pascal
{$mode tp}
```

Alternativ, poți modifica proiectul în sine să îți schimbe dialectul în modul de compatibilitate Turbo Pascal.

Pe `fp`, procesul este simplu: dai click pe Options (sau Alt + O) și apoi Compiler (C) și selectezi din dreapta Turbo Pascal. Pe Lazarus, procesul nu-i cu mult mai complicat. Asigură-te c-ai făcut un proiect (adică ai salvat acel fișier cu `lpr` după cum ți-am zis), apoi din meniu te duci la Project și Project Options. O să vezi Compiler Options in acea listă, de acolo te duci la Parsing și o să vezi un dropdown cu Object Pascal (ceea ce ar trebui în mod normal să folosești; poți selecta în schimb Turbo Pascal). Acum Lazarus o să trateze proiectul tău ca pe unul de Turbo Pascal și o să fie în regulă.

Dacă va merge programul și sub Turbo Pascal, asta-i doar coincidență și probabil programul este destul de simplu; asta nu-i o garanție pe care o s-o fac (e PBInfo Modern, nu Turbo PBInfo).

# Cuvinte finale și așteptări
Aceste programe nu vor conține cele mai rapide implementări (dacă ajungi în acel punct, deja trebuie să te duci pe C, dar în proporție de 120% doar pre- și micro-optimizezi, iar așa cum a zis Donald Knuth în articolul său „[Structured Programming with go to Statements](https://dl.acm.org/doi/pdf/10.1145/356635.356640)”, pag. 8: [„premature optimization is the root of all evil”](# "engl. „Optimizarea prematură este rădăcine tuturor relelor”")). Scopul este să arăt frumusețea și eficiența noilor evoluții în fiecare dintre limbaje, pentru a ilustra că se poate și mai bine dincolo de nivelul de liceu. 

Dacă nu te-ai lăsat de citit, ar trebui să menționez că, din păcate, nu știu dacă te-ar lăsa la bacalaureat cu C++11 sau Object Pascal (oamenii de la corectat abia știu că `iostream` există și încă folosesc Turbo Pascal...), dar dacă știi să adaptezi puțin (și în anumite cazuri să implementezi manual algoritmii și structurile de date folosite sau să improvizez), ai putea să iei ceva din acest repo. Ori asta, ori găsești cod de la alții cu formatare inferioară și cod de te doare capul. Am fost și eu așa, don't worry.

Mult succes, cavalere, pentru că ai drum lung înaintea ta.