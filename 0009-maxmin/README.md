# [maxmin](https://www.pbinfo.ro/probleme/9) (#9)
Se dau 3 numere întregi.

## Cerința
Calculaţi diferența dintre cel mai mare și cel mai mic dintre cele 3 numere date.

## Date de intrare
Programul citește de la tastatură 3 numere naturale separate prin spaţii.

## Date de ieşire
Programul va afișa pe prima linie a ecranului numărul mm, reprezentînd valoarea cerută.

## Restricţii şi precizări
- numerele date vor fi mai mici decît 1.000.000.000

## Exemplu:
Intrare:
```
10 7 2
```
Ieșire:
```
8
```

# Cum se rulează
Este destul de simplu dacă ești pe un sistem Unix. Poți folosi `make` cu
următoarele opțiuni:
- `make` sau `make all` compilează ambele binare, le rulează și compară
  rezultatul (dacă nu-s egale cu datele de ieșire așteptate din `expected.txt`,
  Makefile-ul va arăta un `diff` cu locația unde diferă).
- `make cpp` și `make pas` compilează binarul de C++, respectiv de Pascal;
- `make clean` curăță executabilele și alte fișiere intermediare
- `make help` arată un mic ajutor.

Alternativ, poți să imporți aceste fișiere în editorul tău preferat (Lazarus
pentru Free Pascal, ce altceva folosești tu pentru C++). Probabil există setări
care să-ți permită să ai toate flag-urile mele puse în Makefile, dar nu cred
ca-s strict necesare.

Dacă se întîmplă să ai alt compilator în afară de `g++` (cel mai probabil Clang
pentru că ești pe Mac), înlocuiește cu `clang++` în Makefile la `CXX` sau
rulează în terminal cu `CXX=clang++ make`.

Dacă vrei să rulezi executabilul pe același set de date (precum exemplul), ai la
dispoziție fișierul `input.txt` (care trebuie să existe și să nu fie gol dacă nu
rulezi interactiv). În cazul în care vrei să rulezi programul în mod interactiv,
folosește `INTERACTIVE=1 make <comanda>`. În ambele cazuri, este necesar să
existe `expected.txt` pentru a putea verifica programul (pînă la urmă, rezolvi
aceeași problemă, nu? ;-))