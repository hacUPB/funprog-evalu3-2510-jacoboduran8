#include <stdio.h>

int main() {
    int contador = 0;

    while (contador <= 1000) {
        printf("Iteración: %d\n", contador);
        contador = contador + 7;
    }

    return 0;
}