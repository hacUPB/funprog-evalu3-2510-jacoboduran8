#include <stdio.h>

int main() {
    int opcion;
    float a, b;

    printf("1. Suma\n 2. Resta\n 3. Multiplicación\n 4. División\n");
    scnaf("&d" , &opcion);
    printf("Ingrese los dos números con los que quiera realizar la operación a,b");
    scnaf("&f" , &a, &b);

    switch (opcion) {
        case "1":
            Suma = a + b;
            printf("Eligió suma y el reultado es: %.2f\n", Suma);
            break;
        
        case "2":
            Resta = a - b;
            printf("Eligio resta y el resultado es: %.2f\n", Resta);
            break;
        
        case "3":
            Mult = a * b;
            printf("Eligio multiplicación y el resultado es: %.2f\n", Mult);
            break;

        case "4"
            if (b=0)
                printf("Error matemático");
            else
            {
                Div = a / b; 
                printf("Eligio división y el resultado es: %.2f\n", Div);
                return;
            }
            break;

        default:
    }

    return 0;
}
            



    



    