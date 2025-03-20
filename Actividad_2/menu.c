
// Este primer codigo es con "do-while"
#include <stdio.h>

int main() {
    int opcion;

    do {
        printf("1. Opcion 1\n");
        printf("2. Opcion 2\n");
        printf("3. Opcion 3\n");
        printf("4. Salir\n");
        printf("Seleccione una opción: ");

        scanf("%d", &opcion);

        switch(opcion) {
            case 1:
                printf("Has seleccionado la Opcion 1.\n");
                break;
            case 2:
                printf("Has seleccionado la Opcion 2.\n");
                break;
            case 3:
                printf("Has seleccionado la Opcion 3.\n");
                break;
            case 4:
                printf("Saliendo del programa...\n");
                break;
            default:
                printf("Opción no valida. Inténtalo de nuevo.\n");
        }
    } while (opcion != 4);

    return 0;
}


//Este segundo codigo es con "for"
#include <stdio.h>

int main() {
    int opcion;

    for (opcion = 0; opcion != 5; ) {
        // Mostrar el menú
        printf("\n--- Menú ---\n");
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
    }

    return 0;
}
