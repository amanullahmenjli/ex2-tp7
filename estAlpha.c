#include <ctype.h>

#include "estAlpha.h"

int estAlpha(char *CH) {
    char *p;
    int trouve = 0;
    do {
        if (isalpha(*p) || isspace(*p)) {
            p++;
        } else {
            trouve = 1;
        }
    } while (!trouve // On n'a pas trouvé un charactère invalide
             && *p   // Le charactère courant n'est pas la fin du chaine
    );

    return !trouve;
}
