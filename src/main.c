#include "france.h"
#include <stdio.h>
#include <stdlib.h>


entier principal()
{
    fimprimerf(sortiestd, "Bonjour, Monde !\n");

    entier* pointeur = (entier*) allouemem(12 * taillede(entier));

    gratuit(pointeur);

    baguette();

    retourne 0;
}


entier main()
{
    principal();
}


