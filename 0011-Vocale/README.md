# [Vocale](https://www.pbinfo.ro/probleme/11) (#11)
Se dă un şir de cel mult 20 caractere ce conţine numai litere mici ale alfabetului englez.

## Cerinţa
Să se afişeze şirul obţinut prin înlocuirea fiecărei vocale cu litera mare corespunzătoare.

## Date de intrare
Programul va citi de la tastatură şirul dat.

## Date de ieşire
Programul va afişa pe ecran şirul transformat corespunzător.

## Restricţii şi precizări
- se consideră vocale literele din multimea {a,e,i,o,u}

## Exemplu:
Intrare:
```
romancier
```
Ieșire:
```
rOmAncIEr
```

# Cum se rulează
Este destul de simplu dacă ești pe un sistem Unix. Poți folosi `make` cu
următoarele opțiuni:
- `make` sau `make all` compilează ambele binare, le rulează și compară
  rezultatul (dacă nu-s egale cu datele de ieșire așteptate din `expected.txt`,
  Makefile-ul va arăta un `diff` cu locația unde diferă).
- `make cpp` și `make pas` compilează binarul de C++, respectiv de Pascal;
- `make clean` curăță executabilele și alte fișiere intermediare
- `make help` arată un mic ajutor.

Alternativ, poți să imporți aceste fișiere în editorul tău preferat (Lazarus
pentru Free Pascal, ce altceva folosești tu pentru C++). Probabil există setări
care să-ți permită să ai toate flag-urile mele puse în Makefile, dar nu cred
ca-s strict necesare.

Dacă se întîmplă să ai alt compilator în afară de `g++` (cel mai probabil Clang
pentru că ești pe Mac), înlocuiește cu `clang++` în Makefile la `CXX` sau
rulează în terminal cu `CXX=clang++ make`.

Dacă vrei să rulezi executabilul pe același set de date (precum exemplul), ai la
dispoziție fișierul `input.txt` (care trebuie să existe și să nu fie gol dacă nu
rulezi interactiv). În cazul în care vrei să rulezi programul în mod interactiv,
folosește `INTERACTIVE=1 make <comanda>`. În ambele cazuri, este necesar să
existe `expected.txt` pentru a putea verifica programul (pînă la urmă, rezolvi
aceeași problemă, nu? ;-))