# [Suma divizorilor primi](https://www.pbinfo.ro/probleme/20) (#20)
## Cerință
Să se scrie o funcție C++ care să determine suma divizorilor primi ai unui număr
natural transmis ca parametru. Funcția întoarce rezultatul prin intermediul unui
parametru de ieşire.
## Restricţii şi precizări
- numele funcției va fi sum_div_prim
- funcția va avea doi parametri, reprezentând numărul pentru care se calculează
  suma divizorilor, respectiv valoarea calculată
- numărul pentru care se calculează suma divizorilor primi va fi mai mare decât
  1 și mai mic decât 2.000.000.000


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
lăsat un script de Perl (ai nevoie de `Math::Prime::Util` instalat) pentru a
genera datele de intrare și dacă suma divizorilor primi corespunde sau nu.
Trebuie copiată doar funcția efectivă, restul e pentru a testa programul. Cum
problema cere doar soluție în C++, clar că n-o să fac soluție de Pascal aici
(chiar dacă aș putea).