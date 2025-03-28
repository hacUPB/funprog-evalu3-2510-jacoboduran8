#include <stdio.h>

int main() {
    int opcion;
    float a, b, Suma, Resta, Mult, Div;
    do
    {
    
        printf("1. Suma\n 2. Resta\n 3. Multiplicacion\n 4. Division\n 5. Salir\n");
        scanf("%d" , &opcion);
        if (opcion == 5)
        {
            break;
        }
        printf("Ingrese el primer numero que quiere usar: ");
        scanf("%f" , &a);
        printf("Ingrese el segundo numero: ");
        scanf("%f" , &b);

        

        switch (opcion) {
        case 1:
            Suma = a + b;
            printf("Eligió suma y el reultado es: %.2f\n", Suma);
            break;
        
        case 2:
            Resta = a - b;
            printf("Eligio resta y el resultado es: %.2f\n", Resta);
            break;
        
        case 3:
            Mult = a * b;
            printf("Eligio multiplicacion y el resultado es: %.2f\n", Mult);
            break;

        case 4:
            if (b==0)
                printf("Error matematico");
            else 
            {
                Div = a / b; 
                printf("Eligio division y el resultado es: %.2f\n", Div);
            }
            break;

        default:
            printf("Operacion no valida\n");
            break;
        }
    } while (opcion != 5);
        printf("Terminaste tus operaciones por hoy\n");

 return 0;
}
            



    



    