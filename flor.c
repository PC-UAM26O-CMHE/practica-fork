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
Salida: el numero total de procesos del arbol 
Descripcion: arbol de procesos en forma de flor 
*/ 
 
int main(){ 
    pid_t pid_raiz = getpid(); 
    
    
    
 
 
    for(i=0; i<(t-1); i++){ 
        if(fork()) 
            break;      /*procesos en el tallo*/ 
 
        if(i==(t-1)){ 
            for(j=0; j<f; j++){  /*Flores*/ 
                if(fork()) 
                    break; 
 
                if(j>0){ 
 
                    if(!fork()){ 
                        for(k=0; k<p; k++){
                            if(!fork()) 
                                break; 
                        }
                     
                 
             
        } 
     
 
/* TODO: aqui va tu solucion. 
Pistas:- Cada proceso del tallo debe crear DOS hijos: el siguiente 
eslabon del tallo (salvo el ultimo) y el centro de su 
propia flor.- El centro de una flor crea PETALOS hijos, y esos si son 
hojas (no crean a nadie).- Cada proceso que no sea hoja debe hacer wait() de cada uno 
de sus hijos y sumar lo que le devuelven con exit(), igual 
que en el Ejercicio 1.- Solo el proceso raiz (getpid() == pid_raiz) imprime el 
total final. */ 
 
    return 0; 
}
