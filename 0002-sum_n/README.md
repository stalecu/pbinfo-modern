# [sum_n](https://www.pbinfo.ro/probleme/2) (#2)
Se dau n numere naturale nenule.

## Cerința
Calculaţi suma celor n numere date.

## Date de intrare
Programul citește de la tastatură numărul n, iar apoi n numere naturale.

## Date de ieşire
Programul afișează pe prima linie a ecranului numărul S, reprezentând suma celor n numere.

## Restricţii şi precizări
- 0 < n < 1000
- cele n numere citite vor fi mai mici decât 1000


## Exemplu:
Intrare:
```
5
6 2 0 4 1
```
Ieșire:
```
13
```

# Cum se rulează
Este destul de simplu dacă ești pe Linux. Poți folosi `make` cu următoarele
opțiuni:
- `make` sau `make all` compilează ambele binare, le rulează și compară
  rezultatul (dacă nu-s egale, Makefile-ul va arăta un `diff` cu locația unde
  diferă).
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
dispoziție fișierul `input.txt`. Dacă totuși vrei să rulezi programul în mod
interactiv, folosește `INTERACTIVE=1 make`.