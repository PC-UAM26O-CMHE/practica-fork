#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>

#define TALLO 5
#define PETALOS 4
#define  FLOR 3

/*
Entrada: ninguna (usa las constantes de arriba)
Salida: el numer total de proceso del arbol
Descripcion: arbol de procesos en forma de flor
*/

int main() {
    pid_t pid_raiz = getpid();

    /* TODO: aqui va tu solucion.
       Pistas:
	- Cada proceso del tallo debe crear DOS hijos: el siguiente 
		eslabon del tallo (salvo el ultimo) y el centro de su propia
		 flor.
	- El centro de una flor crea PETALOS hijo, y esos si son 
		hojas (no crean a nadie).
	- Cada proceso que no sea hoja debe hacer wait() de cada
		uno de sus hijos y sumar lo que le devuelven con exit(), igual
		que en el ejercicio 1.
	- Solo el proceso raiz (getpid() == ppid_raiz) imprime el total
		final */
    for(i = 0; i < (TALLO -1); i++) {
	 if(fork())
	   break;
    }

    if(i == (TALLO -1) {
	for(j = 0; j < FLOR; j++) {
	    if(fork())
		break;
	}
    
        if(j > 0) {

         	if(!fork()) {

	             for(k = 0; k < PETALOS; k++) {
		            if(!fork())
		           	break;
	             }
           	}
         }
     }
     return 0;
}
