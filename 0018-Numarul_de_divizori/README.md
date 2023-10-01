# [Numarul de divizori](https://www.pbinfo.ro/probleme/18) (#18)
Se da un număr natural n.

## Cerința
Calculaţi numărul de divizori ai lui n.

## Date de intrare
Fişierul de intrare `nrdiv.in`` conţine pe prima linie numărul n.
## Date de ieşire
Fişierul de ieşire `nrdiv.out`` va conţine pe prima linie numărul rez, reprezentând numărul de divizori ai lui n.

## Restricţii şi precizări
- 0 < n <= 100.000

## Exemplu:
`nrdiv.in`:
```
6
```
`nrdiv.out`:
```
4
```

# Cum se rulează
Este destul de simplu dacă ești pe Linux. Poți folosi `make` cu următoarele
opțiuni:
- `make` sau `make all` compilează ambele binare, le rulează și compară
  rezultatul (dacă nu-s egale, Makefile-ul va arăta un `diff` cu locația unde
  diferă).
- `make cpp` și `make pas` compilează binarul de C++, respectiv de Pascal;
- `make clean` curăță executabilele, alte fișiere intermediare, `nrdiv.in` și `nrdiv.out`
  (pentru că le putem regenera).
- `make help` arată un mic ajutor.

Trebuie ca fișierele `input.txt` (ce conține, evident, datele de intrare) și
`expected.txt` (ce date de ieșire ar trebui să ai) să existe și să nu fie goale.
Astfel, poți testa programul tău cu date de intrare/ieșire din problemă
independent de limbajul folosit. Makefile-ul va copia automat fișierul
`input.txt` în `nrdiv.in`, deci nu trebuie să te îngrijorezi că nu va rula
programul, atîta timp cît îl rulezi folosind `make` sau `make cpp` sau `make
pas`.

Alternativ, poți să imporți aceste fișiere în editorul tău preferat (Lazarus
pentru Free Pascal, ce altceva folosești tu pentru C++). Probabil există setări
care să-ți permită să ai toate flag-urile mele puse în Makefile, dar nu cred
ca-s strict necesare.

Dacă se întîmplă să ai alt compilator în afară de `g++` (cel mai probabil Clang
pentru că ești pe Mac), înlocuiește cu `clang++` în Makefile la `CXX` sau
rulează în terminal cu `CXX=clang++ make`.
