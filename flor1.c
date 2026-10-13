#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>

#define TALLO 5
#define PETALOS 4
#define FLOR 3

/*
Entrada: ninguna (usa las constantes de arriba)
Salida: el numer total de proceso del arbol
Descripcion: arbol de procesos en forma de flor
*/

int main() {

    



    int i;
    int j;
    int k;
    int t;
    int estatus; //recupera el resultado de un hijo
     


    pid_t pid_raiz = getpid();

    /* Crear la cadena del tallo */
    for(i = 0; i < TALLO - 1; i++) {
        if(fork()) {
            wait(&estatus);
            t = WEXITSTATUS(estatus) + 1;

            if(getpid() == pid_raiz) {
                printf("Total: %d\n", t);
            } else {
                exit(t);
            }

            return 0;
        }
    }

    /* El ultimo proceso del tallo crea los centros florales */
    t = 0;

    for(j = 0; j < FLOR; j++) {
        if(fork() == 0) {

            /* Cada centro crea sus petalos */
            for(k = 0; k < PETALOS; k++) {
                if(fork() == 0) {
                    exit(1);
                }
            }

            /* El centro espera a sus cuatro petalos */
            t = 0;

            for(k = 0; k < PETALOS; k++) {
                wait(&estatus);
                t += WEXITSTATUS(estatus);
            }

            /* El centro tambien cuenta como proceso */
            t++;
            exit(t);
        }
    }

    /* El ultimo proceso del tallo espera a los centros */
    for(j = 0; j < FLOR; j++) {
        wait(&estatus);
        t += WEXITSTATUS(estatus);
    }

    /* El ultimo proceso del tallo tambien se cuenta */
    t++;
    exit(t);
}
