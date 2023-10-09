# [Shift](https://www.pbinfo.ro/probleme/38) (#38)
## Cerință
Scrieţi definiția completă a subprogramului shift care primește prin intermediul
parametrului n o valoare naturală nenulă (n≤100), iar prin intermediul
parametrului x, un tablou unidimensional cu n componente. Fiecare componentă a
acestui tablou este un număr întreg care are cel mult 8 cifre.

Subprogramul permută circular cu o poziţie spre stânga primele n elemente ale
tabloului x și furnizează tabloul modificat tot prin parametrul x.

## Restricţii şi precizări
- 0 < n <= 100
- numele subprogramului cerut este shift
- parametrii sunt, în această ordine: x, n
- tabloul x are elementele indexate de la zero

## Exemplu
Dacă inițial n=6 și x= (12, 7, 6, 3, 8, 5), după apel tabloul devine x= (7, 6, 3, 8, 5, 12).

## Important
Soluţia propusă va conţine doar definiţia funcţiei cerute. Prezenţa în soluţie a
altor instrucţiuni poate duce erori de compilare sau de execuţie care vor avea
ca efect depunctarea soluţiei.

# Cum se rulează
Este destul de simplu dacă ești pe un sistem Unix. Poți folosi `make` cu
următoarele opțiuni:
- `make` sau `make all` compilează ambele binare, le rulează și compară
  rezultatul (dacă nu-s egale cu datele de ieșire așteptate din `expected.txt`,
  Makefile-ul va arăta un `diff` cu locația unde diferă).
- `make cpp` compilează binarul de C++;
- `make clean` curăță executabilele și alte fișiere intermediare
- `make help` arată un mic ajutor.

Alternativ, poți să imporți aceste fișiere în editorul tău preferat. Probabil
există setări care să-ți permită să ai toate flag-urile mele puse în Makefile,
dar nu cred ca-s strict necesare.

Dacă se întîmplă să ai alt compilator în afară de `g++` (cel mai probabil Clang
pentru că ești pe Mac), înlocuiește cu `clang++` în Makefile la `CXX` sau
rulează în terminal cu `CXX=clang++ make`.

Atenție: spre deosebire de alte probleme, aici nu mai există modul `INTERACTIVE`
pentru că nu citesc un N aici, deci nu are cum să se oprească programul. Am
lăsat un script de Perl pentru a genera datele de intrare și a afișa tablourile
permutate corespunzător. Trebuie copiată doar funcția efectivă, restul e pentru
a testa programul. Cum problema cere doar soluție în C++, clar că n-o să fac
soluție de Pascal aici (chiar dacă aș putea).