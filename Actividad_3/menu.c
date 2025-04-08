#include <stdio.h>

int main() {
    int opcion;
    double num1, num2;

    do {
        printf("1. Sumar\n");
        printf("2. Restar\n");
        printf("3. Salir\n");
        printf("Seleccione una opción: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                printf("Ingrese dos números: ");
                scanf("%lf %lf", &num1, &num2);
                printf("Resultado: %.2lf\n", (num1 + num2));
                break;
            case 2:
                printf("Ingrese dos números: ");
                scanf("%lf %lf", &num1, &num2);
                printf("Resultado: %.2lf\n", (num1 - num2));
                break;
            case 3:
                printf("Saliendo del programa...\n");
                break;
            default:
                printf("Opción no válida. Intente de nuevo.\n");
        }
    } while (opcion != 3);

    return 0;
}