# [BFS](https://www.pbinfo.ro/probleme/19) (#19)
Se consideră un graf neorientat cu n vârfuri și m muchii și de asemenea un vârf
X.

## Cerinţa

Să se afișeze vârfurile vizitate în urma parcurgerii în lățime (Breadth First
Search) a grafului, pornind din vârful X.
## Date de intrare

Fişierul de intrare BFS.in conţine pe prima linie trei numere naturale n m X,
având următoarea semnificație: n este numărul de noduri, m este numărul de
muchii din graf, iar X este vârful din care se începe parcurgerea. Următoarele m
linii conțin câte două numere x y cu semnificația că există muchie între x și y.
## Date de ieşire

Fişierul de ieşire BFS.out va conţine pe prima linie vârfurile vizitate în urma
parcurgerii în lățime a grafului, aceasta începând din vârful X.
## Restricţii şi precizări

- 2 ≤ n ≤ 100
- 1 ≤ m ≤ n*(n-1)/2
- **Graful poate sa nu fie conex!!!**
- dacă în timpul parcurgerii, la un moment dat vârful curent al grafului este Y,
  vecinii nevizitați ai lui Y se vor analiza în ordine crescătoare.

## Exemplu:

`BFS.in`:
```
5 7 2
1 2
3 2
1 5
2 4
3 1
4 5
5 3 
```

`BFS.out`:
```
2 1 3 4 5 
```
 
# Cum se rulează
Este destul de simplu dacă ești pe Linux. Poți folosi `make` cu următoarele
opțiuni:
- `make` sau `make all` compilează ambele binare, le rulează și compară
  rezultatul (dacă nu-s egale, Makefile-ul va arăta un `diff` cu locația unde
  diferă).
- `make cpp` și `make pas` compilează binarul de C++, respectiv de Pascal;
- `make clean` curăță executabilele, alte fișiere intermediare, `BFS.in` și `BFS.out`
  (pentru că le putem regenera).
- `make help` arată un mic ajutor.

Trebuie ca fișierele `input.txt` (ce conține, evident, datele de intrare) și
`expected.txt` (ce date de ieșire ar trebui să ai) să existe și să nu fie goale.
Astfel, poți testa programul tău cu date de intrare/ieșire din problemă
independent de limbajul folosit. Makefile-ul va copia automat fișierul
`input.txt` în `BFS.in`, deci nu trebuie să te îngrijorezi că nu va rula
programul, atîta timp cît îl rulezi folosind `make` sau `make cpp` sau `make
pas`.

Alternativ, poți să imporți aceste fișiere în editorul tău preferat (Lazarus
pentru Free Pascal, ce altceva folosești tu pentru C++). Probabil există setări
care să-ți permită să ai toate flag-urile mele puse în Makefile, dar nu cred
ca-s strict necesare.

Dacă se întîmplă să ai alt compilator în afară de `g++` (cel mai probabil Clang
pentru că ești pe Mac), înlocuiește cu `clang++` în Makefile la `CXX` sau
rulează în terminal cu `CXX=clang++ make`.
