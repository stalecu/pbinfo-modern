# [Interval](https://www.pbinfo.ro/probleme/34) (#34)
## Cerință
Scrieţi definiția completă a subprogramului C++ interval care are 2 parametri:
a, prin care primeşte un tablou unidimensional cu maximum 100 de numere naturale
mai mici decât 1000 și n, numărul efectiv de elemente ale tabloului.

Subprogramul returnează numărul de elemente din tablou care aparțin intervalului
închis determinat de primul și ultimul element al tabloului.

## Restricţii şi precizări
- 0 < n ≤ 100
- numele subprogramului cerut este interval
- parametrii sunt, în această ordine: a, n
- elementele vectorului a sunt indexate de la zero

## Exemplu
Dacă n = 6 și a = (63, 273, 9, 83, 93, 123) subprogramul va returna valoarea 4.

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
lăsat un script de Perl pentru a genera datele de intrare și dacă numerele se
afla în intervalul dat de capetele tabloului. Trebuie copiată doar funcția
efectivă, restul e pentru a testa programul. Cum problema cere doar soluție în
C++, clar că n-o să fac soluție de Pascal aici (chiar dacă aș putea).