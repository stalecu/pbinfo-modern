# [Primalitate](https://www.pbinfo.ro/probleme/14) (#14)
Să se scrie o funcție C++ care verifică dacă un număr natural transmis ca
parametru este prim.

## Restricţii şi precizări
- numele funcției scrise este prim
- funcția are un parametru, număr natural; valoarea sa va fi mai mică decât
  1.000.000.000
- rezultatul funcției este 1 dacă valoarea parametrului este număr prim,
  respectiv 0 în caz contrar

## Important
Soluția propusă va conține doar funcția cerută. Introducerea în soluție a altor
instrucțiuni poate duce la erori de compilare sau de execuție, care vor duce la
depunctarea soluției.

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
genera datele de intrare și a verifica dacă numărul este prim sau nu. Trebuie
copiată doar funcția efectivă, restul e pentru a testa programul. Cum problema
cere doar soluție în C++, clar că n-o să fac soluție de Pascal aici (chiar dacă
aș putea).