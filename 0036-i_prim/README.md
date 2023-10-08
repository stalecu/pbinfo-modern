# [i_prim](https://www.pbinfo.ro/probleme/36) (#36)
## Cerință
Scrieţi definiția completă a unui subprogram C++ i_prim care primește prin
singurul său parametru, n, un număr natural cu cel mult 9 cifre și returnează
diferența minimă p2-p1 în care p1 şi p2 sunt numere prime și p1≤n≤p2. 
## Restricţii şi precizări
- numele subprogramului va fi i_prim
- n>2
- 
## Exemplu
Dacă n=28, i_prim(n)=6, deoarece p1=23 și p2=29.

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
lăsat un script de Perl pentru a genera datele de intrare și a calcula distanța
cerută. Trebuie copiată doar funcția efectivă, restul e pentru a testa
programul. Cum problema cere doar soluție în C++, clar că n-o să fac soluție de
Pascal aici (chiar dacă aș putea).