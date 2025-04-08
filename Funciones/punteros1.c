#include <stdio.h>

int main(int argc, char const *argv[]){
    int y, z;
    int *x = NULL; // "*" Sirve para declarar el puntero y la desrreferenciación de la variable
    y = 35;
    x = &y; // "&" averigua cuál es la dirección que el sistema operativo le asigno a esta variable
    // Un puntero solo almacena direcciones de memoria

    printf("Dirección de memoria de y %p\n", &y);
    printf("Contenido de x %p\n", x);
    printf("Contenido de y %d\n", y);

    //Cambiar el contenido de "y" usando el puntero
    (*x) = 100; //Desrreferenciación usando "*"
    printf("Contenido y %d\n", y);

    y = (*x) * 2; // Este nuevo valor queda guardado en "y"

    x = &z; // Ahí le estoy diciendo que averigue en que dirección de memoria esta la varable "z"

}