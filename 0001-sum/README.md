# [sum](https://www.pbinfo.ro/probleme/1) (#1)
Se dau 2 numere întregi.

## Cerința
Calculaţi suma celor 2 numere date.

## Date de intrare
Fişierul de intrare `sum.in` conţine pe prima linie 2 numere întregi separate
printr-un spaţiu.

## Date de ieşire
Fişierul de ieşire `sum.out` va conţine pe prima linie numărul `S`, reprezentând
suma celor două numere.

## Restricţii şi precizări
- valoarea absolută a numerelor din fişierul de intrare va fi mai mică decât
  1.000.000.000

## Exemplu:
`sum.in`:
```
12 23
```
`sum.out`:
```
35
```

# Cum se rulează
Este destul de simplu dacă ești pe Linux. Poți folosi `make` cu următoarele
opțiuni:
- `make` sau `make all` compilează ambele binare, le rulează și compară
  rezultatul (dacă nu-s egale, Makefile-ul va arăta un `diff` cu locația unde
  diferă).
- `make cpp` și `make pas` compilează binarul de C++, respectiv de Pascal;
- `make clean` curăță executabilele, alte fișiere intermediare și `sum.out`
  (pentru că-l putem regenera).
- `make help` arată un mic ajutor.

Alternativ, poți să imporți aceste fișiere în editorul tău preferat (Lazarus
pentru Free Pascal, ce altceva folosești tu pentru C++). Probabil există setări
care să-ți permită să ai toate flag-urile mele puse în Makefile, dar nu cred
ca-s strict necesare.

Dacă se întîmplă să ai alt compilator în afară de `g++` (cel mai probabil Clang
pentru că ești pe Mac), înlocuiește cu `clang++` în Makefile la `CXX` sau
rulează în terminal cu `CXX=clang++ make`.