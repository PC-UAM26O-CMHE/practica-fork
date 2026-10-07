# Práctica Fork

Práctica de Programación Concurrente en C sobre la creación y comunicación entre procesos mediante `fork()`, `wait()` y `exit()`.

## Objetivo

Comprender cómo se crean procesos en Linux y cómo se establece la comunicación entre procesos padre e hijo.

Durante la práctica se trabajó con diferentes estructuras de procesos, desde una relación padre-hijo hasta árboles de procesos.

## Temas trabajados

* Creación de procesos con `fork()`.
* Identificación de procesos mediante `getpid()` y `getppid()`.
* Comunicación entre procesos padre e hijo mediante `wait()` y `exit()`.
* Uso de `WIFEXITED()` y `WEXITSTATUS()`.
* Creación de procesos en forma lineal.
* Creación de árboles de procesos.
* Observación de procesos mediante `ps` y `pstree`.
* Compilación de programas en C utilizando `gcc`.

## Archivos

### `ejemplo1.c`

Ejemplo básico de creación de un proceso hijo mediante `fork()`. Permite observar la relación entre el proceso padre y su hijo.

### `ejemplo2.c`

Ejemplo de una estructura lineal de procesos. Cada proceso crea al siguiente formando una cadena de procesos y utiliza `wait()` y `exit()` para comunicar el número de procesos.

### `escalonado.c`

Ejercicio de creación de un árbol de procesos escalonado o triangular. Los procesos se organizan en filas y el proceso raíz obtiene el número total de procesos mediante `wait()` y `exit()`.

### `flor.c`

Ejercicio de creación de un árbol de procesos con forma de flor. El árbol está formado por un tallo, centros de flores y pétalos. Cada centro de flor crea varios procesos hijos que funcionan como hojas.

## Requisitos

* Ubuntu o Debian.
* GCC.
* Nano.

## Compilación

Para compilar un programa:

```bash
gcc nombre_archivo.c -o nombre_archivo
```

Por ejemplo:

```bash
gcc ejemplo1.c -o ejemplo1
```

Para ejecutarlo:

```bash
./ejemplo1
```

