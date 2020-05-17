# POO3

● Cerințe comune tuturor temelor:
1. u4lizarea sabloanelor
2. u4lizarea STL
3. u4lizarea variabilelor, funcțiilor sta4ce, constantelor și a unei func4i const
4. u4lizarea conceptelor de RTTI raportat la template-uri
5. tratarea excepțiilor
6. ci4rea informațiilor complete a n obiecte, memorarea și afișarea acestora 

cerințe generale aplicate fiecărei teme din acest fișier:
- să se iden4fice și să se implementeze ierarhia de clase;
- clasele să conțină constructori, destructori, =, funcție prietena de ci4re a datelor;
- clasa de baza sa conțină funcție virtuala de afisare, rescrisa în clasele derivate, iar
operatorul de ci4re să fie implementat ca funcție prieten (în clasele derivate să se facă
referire la implementarea acestuia în clasa de baza

Tema 2. La ora de Biologie, copiii din ciclul gimnazial învață că regnul animal se împarte în 2
grupuri: nevertebrate și vertebrate. La rândul lor, vertebratele se împart în peș4, păsări,
mamifere și rep4le.
Structura de date: list<Animal*>
Cerința suplimentară:
- Să se adauge toate campurile relevante pentru modelarea acestei probleme. 
- Să se construiască clasa template AtlasZoologic care sa conțină un număr de animale
(incrementat automat la adaugarea unei noi file) și structura de obiecte de 4pul regnurilor
implementate, alocat dinamic. Sa se supraincarce operatorul += pentru inserarea unei fișe de
observație a unui animal în vector.
- Să se construiască o specializare pentru 4pul Peș/ care sa adapteze operatorii menționați și
care sa afiseze, în plus, ca4 pes4 rapitori de lungime mai mare de 1m s-au ci4t. 
