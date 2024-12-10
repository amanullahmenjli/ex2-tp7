/*
 *	Objectifs de ce programme:
 *		1. Saisir une chaine de charactères CH non vide formée
 *		   uniquement des lettres alphabétiques, l'espace est aussi
 *		   autorisé.
 *		2. Compter les occurences des lettres alphabétiques en faisant
 *		   abstraction à la case
 */

#include "compterOccurence.h"
#include "estAlpha.h"
#include <stdio.h>
#include <string.h>

int main() {
    // Saisir une chaine de charactères CH
    char CH[255];
    do {
        printf("Donner une chaine de charactères: ");
        fgets(CH, sizeof(CH), stdin);
    } while (
        // Verifier que CH est non vide
        strlen(CH) <= 0 &&
        // Verifier que CH est formée uniquement des lettres alphabétiques est
        // des espaces
        !estAlpha(CH));

    // Afficher la chaine
    puts(CH);

    // Tell the number of occurences of each alphabetic character
    compterOccurences(CH);

    return 0;
}
