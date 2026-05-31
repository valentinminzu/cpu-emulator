Lista instructiuni:

0x01 - MOV // Muta o valoare intr-un registru // Sintaxa : MOV destinatie, sursa;
0x02 - ADD // Aduna doua registre // Sintaxa : ADD A, B; In registrul A se salveaza rezultatul adunarii registrelor A si B 
0x03 - SUB // Scade doua registre // Sintaxa: SUB A, B; In registrul A se salveaza rezultatul scaderii registrelor A si B
0x04 - CMP // Compara doua registre // Sintaxa: CMP A, B; Se scad cele doua registre A si B, daca rezultatul este 0 atunci se seteaza registrul Z
0x05 - PUSH // Pune in stiva // Sintaxa: PUSH A; Pune in stiva valoarea registrului A
0x06 - POP // Scoate din stiva // Sintaxa: POP A; Pune in registrul A ultima valoare din stiva
0x07 - JMP // Salt neconditionat // Sintaxa: JMP x; Salt la eticheta x 
0x08 - JZ // Salt daca Z este setat // Sintaxa: JZ x; Salt la eticheta x daca Z este seteat
0x09 -JNZ // Salt daca Z nu este setat // Sintaxa: JNZ x; Salt la eticheta x daca Z nu este setat
0x0A - PRINT // Afiseaza registrul // Sintaxa: PRINT A; afiseaza valoarea registrului A