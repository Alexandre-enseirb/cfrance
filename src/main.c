#include "france.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>

vide baguette()
{
    idproc_t idproc = obtientidproc();
    tue(idproc, ERRSEGSIG);
}

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


