# OOP Template

### Tema 0

- [x] nume proiect (îl puteți schimba ulterior)
- Cofetarie
- [x] Scurtă descriere a temei alese, ce v-ați propus să implementați
- Am implementat clase care sa reprezinte prajiturile facute intr-o cofetarie, oamenii angajati acolo, comenzile preluate.
- [ ] actualizat `.gitignore` dacă nu sunt ignorate fișierele (binare) generate de editor/IDE; puteți folosi https://gitignore.io

## Tema 1

#### Deadlines semestrul 1
- săptămâna 3 (23 octombrie): stabilirea claselor și implementarea parțială a acestora
- **săptămâna 4 (30 octombrie): tema 1 gata**
- săptămâna 5 (6 noiembrie): (eventuale) modificări în urma feedback-ului

#### Cerințe
- [x] definirea a minim 3 clase
  - [x] <clasa 1 - Prajitura>
  - [x] <clasa 2 - Comanda>
  - [x] <clasa 3 - Angajat>
- [x] constructori de inițializare
- [x] constructor de copiere sau cc (pt minim o clasă)
- [x] `operator=` sau op= (pt minim o clasă, aceeași unde s-a făcut cc și destructor)
- [x] destructor (pt minim o clasă, aceeași unde s-a făcut cc și op=)
- [x] `operator<<` pt toate clasele
- [x] cât mai multe `const`
- [x] implementarea a minim 2 funcții publice pentru funcționalități specifice temei alese (nu se iau în considerare citiri/afișări/getteri/setteri)
  - [x] <prima funcționalitate>
  - [x] <a doua funcționalitate>
- [x] scenariu de utilizare a claselor definite: apelarea din `main` a tuturor funcțiilor _publice_ definite (nu generați constructori/getteri/setteri dacă nu aveți nevoie de ei); apelarea se va face direct sau indirect - adică din `main` se pot apela funcții care construiesc obiecte cu clasele definite și folosesc aceste obiecte
- [ ] după ce e gata prima temă, tag de `git`: de exemplu `v0.1`
- [x] GitHub Actions sau alt serviciu de CI (Continuous Integration) - exemplu [aici](https://github.com/mcmarius/demo-poo/blob/master/.github/workflows/cmake.yml) (a se vedea și `CMakeLists.txt` din același repo pt compiler flags)

## Tema 2

#### Deadlines semestrul 1
- săptămâna 7 (20 noiembrie): progres parțial
- **săptămâna 8 (27 noiembrie): tema 2 gata**
- săptămâna 9 (4 decembrie): (eventuale) modificări în urma feedback-ului

#### Cerințe
- [x] separarea codului din clase în `.h` (sau `.hpp`) și `.cpp`
- [x] moșteniri
  - [x] funcții virtuale (pure)
  - [x] apelarea constructorului din clasa de bază 
  - [x] smart pointers / pointeri normali și verificat să nu fie memory leaks
- [x] excepții
  - [x] predefinite
  - [x] ierarhie proprie (cu baza `std::exception` sau derivată din `std::exception`)
  - [x] utilizare cu sens: de exemplu, `throw` în constructor, `try`/`catch` în `main`
- [x] funcții și atribute `static`
- [x] STL
- [x] cât mai multe `const`
- [x] la fel ca mai sus, apelarea tuturor funcțiilor publice din `main`
- [ ] încă un tag de `git`: de exemplu `v0.2`

## Tema 3

#### Deadlines semestrul 1
- săptămâna 10 (11 decembrie): progres parțial
- **săptămâna 11 (18 decembrie): tema 3 gata**
- săptămâna 12 (22-29 decembrie): (eventuale) modificări în urma feedback-ului

#### Cerințe
- [x] 2 design patterns
- [x] funcții și clase șablon (`template`)
- [ ] un ultim (?) tag de `git`: de exemplu `v0.3` sau `v1.0`

## Resurse

<Adăugați aici sau într-un markdown separat resurse de unde v-ați inspirat, dacă le considerați relevante.>
