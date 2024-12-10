#include "compterOccurence.h"
#include <ctype.h>
#include <printf.h>
#include <stdio.h>

void compterOccurences(char *CH) {
    int ABC[26]; // Tableau de nombre d'occurences des lettre alphabétique
    int *pABC;   // Un pointeur pour parcourir le tableau
    char *pCH;   // Pointeur pour parcourir la chaine

    // Initialiser les cases de tableau à 0
    for (pABC = ABC; pABC < ABC + 26; pABC++)
        *pABC = 0;

    // Parcourir la chaine
    for (pCH = CH; *pCH; pCH++) {
        // Compter les occurences pour les charactères non espaces
        if (!(isspace(*pCH))) {
            // Comme le code ascii de 'A' est 65 alors soustracter 65 de code
            // ascii de chaque lettre nous donne la position correspondante dans
            // le tableau des occurences
            ABC[toupper(*pCH) - 65]++;
        }
    }

    // Afficher les occurences
    for (pABC = ABC; pABC < ABC + 26; pABC++) {
        // Afficher uniquement les valeurs positives
        if (*pABC)
            printf("%d fois la lettre %c\n", *pABC, pABC - ABC + 65);
    }
}
