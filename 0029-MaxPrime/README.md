<<<<<<< HEAD
# [Cifre_Zero](https://www.pbinfo.ro/probleme/29) (#29)
## Cerinţa

Să se scrie o funcție C++ care, pentru un număr natural n transmis ca parametru,
determină și întoarce prin intermediul unor parametri de ieșire cele mai mari
două numere naturale prime mai mici decât n.
## Restricţii şi precizări

- numele funcției va fi sub
- funcția va avea exact trei parametri, în această ordine:
  - primul parametru, n, reprezintă un număr natural, 5 ≤ n < 1000000000
  - a și b sunt parametrii prin care funcția va întoarce cele două valori
    căutate
- parametrii a și b respectă relația a>b

## Exemplu

Dacă n=28, apelul subprogramului va furniza prin parametrul a valoarea 23, iar
prin b valoarea 19.
=======
# [MaxPrime](https://www.pbinfo.ro/probleme/29) (#29  )
## Cerinţa
Să se scrie o funcție C++ care, pentru un număr natural n transmis ca parametru,
determină și întoarce prin intermediul unor parametri de ieșire cele mai mari
două numere naturale prime mai mici decât n.

## Restricţii şi precizări
- numele funcției va fi sub
- funcția va avea exact trei parametri, în această ordine:
  - primul parametru, n, reprezintă un număr natural, 5 ≤ n < 1000000000
  - a și b sunt parametrii prin care funcția va întoarce cele două valori căutate
- parametrii a și b respectă relația a>b

>>>>>>> 514ec8b ([0029] MaxPrime)
## Important

Soluţia propusă va conţine doar definiţia funcţiei cerute. Prezenţa în soluţie a
altor instrucţiuni poate duce erori de compilare sau de execuţie care vor avea
<<<<<<< HEAD
ca efect depunctarea soluţiei. 
=======
ca efect depunctarea soluţiei.
>>>>>>> 514ec8b ([0029] MaxPrime)

# Cum se rulează
Este destul de simplu dacă ești pe un sistem Unix. Poți folosi `make` cu
următoarele opțiuni:
- `make` sau `make all` compilează ambele binare, le rulează și compară
  rezultatul (dacă nu-s egale cu datele de ieșire așteptate din `expected.txt`,
  Makefile-ul va arăta un `diff` cu locația unde diferă).
- `make cpp` compilează binarul de C++;
- `make clean` curăță executabilele și alte fișiere intermediare
- `make help` arată un mic ajutor.

Alternativ, poți să imporți aceste fișiere în editorul tău preferat (Lazarus
pentru Free Pascal, ce altceva folosești tu pentru C++). Probabil există setări
care să-ți permită să ai toate flag-urile mele puse în Makefile, dar nu cred
ca-s strict necesare.

Dacă se întîmplă să ai alt compilator în afară de `g++` (cel mai probabil Clang
pentru că ești pe Mac), înlocuiește cu `clang++` în Makefile la `CXX` sau
rulează în terminal cu `CXX=clang++ make`.

Atenție: spre deosebire de alte probleme, aici nu mai există modul `INTERACTIVE`
pentru că nu citesc un N aici, deci nu are cum să se oprească programul. Am
lăsat un script de Perl (ai nevoie de `Math::Prime::Util` instalat) pentru a
genera datele de intrare și dacă numerele-s prime sau nu. Trebuie copiată doar
funcția efectivă, restul e pentru a testa programul. Cum problema cere doar
soluție în C++, clar că n-o să fac soluție de Pascal aici (chiar dacă aș putea).