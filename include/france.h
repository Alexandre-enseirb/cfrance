#define inclure include
#define vide void
#define entier int
#define carac char
#define court short
#define retourne return
#define si if
#define pour for
#define tantque while
#define allouemem malloc
#define taillede sizeof
#define tue kill
#define idproc_t pid_t
#define ERRSEGSIG SIGSEGV
#define obtientidproc getpid
#define statique static
#define interrupteur switch
#define cas case
#define briser break
#define gratuit free
#define imprimerf printf
#define fimprimerf fprintf
#define sortiestd stdout
#define sortieerr stderr
#define entreestd stdin

#include <unistd.h>
#include <signal.h>

vide baguette()
{
    idproc_t idproc = obtientidproc();
    tue(idproc, ERRSEGSIG);
}