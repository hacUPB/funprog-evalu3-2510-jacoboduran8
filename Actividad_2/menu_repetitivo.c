#include <stdio.h>

int main() {
    int opcion;

    do {
        printf("1. Opción 1\n");
        printf("2. Opción 2\n");
        printf("3. Opción 3\n");
        printf("4. Opción 4\n");
        printf("5. Salir\n");
        printf("Seleccione una opción: ");

        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                printf("Has seleccionado la Opción 1.\n");
                break;
            case 2:
                printf("Has seleccionado la Opción 2.\n");
                break;
            case 3:
                printf("Has seleccionado la Opción 3.\n");
                break;
            case 4:
                printf("Has seleccionado la Opción 4.\n");
                break;
            case 5:
                printf("Saliendo del programa...\n");
                break;
            default:
                printf("Opción no válida. Inténtalo de nuevo.\n");
        }

    } while (opcion != 5);

    return 0;
}
