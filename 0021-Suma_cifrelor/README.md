# [Suma_cifrelor](https://www.pbinfo.ro/probleme/21) (#21)
## Cerinţa

Să se scrie o funcție C++ care să determine suma cifrelor unui număr natural
transmis ca parametru. Funcția întoarce rezultatul prin intermediul unui
parametru de ieşire.
## Restricţii şi precizări

- numele funcției va fi sum_cif
- funcția va avea doi parametri: primul parametru reprezintă numărul pentru care
  se calculează suma cifrelor, iar al doilea parametru reprezintă valoarea
  calculată
- numărul pentru care se calculează suma cifrelor va fi mai mic decât
  2.000.000.000

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

Alternativ, poți să imporți aceste fișiere în editorul tău preferat (Lazarus
pentru Free Pascal, ce altceva folosești tu pentru C++). Probabil există setări
care să-ți permită să ai toate flag-urile mele puse în Makefile, dar nu cred
ca-s strict necesare.

Dacă se întîmplă să ai alt compilator în afară de `g++` (cel mai probabil Clang
pentru că ești pe Mac), înlocuiește cu `clang++` în Makefile la `CXX` sau
rulează în terminal cu `CXX=clang++ make`.

Atenție: spre deosebire de alte probleme, aici nu mai există modul `INTERACTIVE`
pentru că nu citesc un N aici, deci nu are cum să se oprească programul. Am
lăsat un script de Perl pentru a genera datele de intrare și pentru a calcula
suma cifrelor acelui număr. Trebuie copiată doar funcția efectivă, restul e
pentru a testa programul. Cum problema cere doar soluție în C++, clar că n-o să
fac soluție de Pascal aici (chiar dacă aș putea).