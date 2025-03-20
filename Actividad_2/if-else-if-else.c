#include <stdio.h>

int main() {
    int nota;

    printf("Ingrese la calificación: ");
    scanf("%d", nota);

    // Evaluar la calificación con if-else if-else
    if (nota == 0 & nota == 1) {
        printf("Insuficiente\n");
    } else if (nota == 2) {
        printf("Deficiente\n");
    } else if (nota == 3) {
        printf("Aceptable\n");
    } else if (nota == 4) {
        printf("Notable\n");
    } else if (nota == 5) {
        printf("Sobresaliente\n");
    } else {
        printf("Calificación no válida.\n");
    }

    return 0;
}
