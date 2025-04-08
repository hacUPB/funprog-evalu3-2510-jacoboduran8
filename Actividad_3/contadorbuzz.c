#include <stdio.h>

int main() {
    int contador;
    int b;

    printf("Ingrese desde donde: ");
    scanf("%d", &contador);
    printf("Ingresar hasta donde: ");
    scanf ("%d", &b);

    while (contador <= b) {
        if (contador % 5 == 0 && contador % 3 == 0)
        {
            printf("BuzzBiss\n");
        } else if (contador % 3 == 0)
            {
                printf("Biss\n");
            } else if (contador % 5 == 0 )
            {
                printf("Buzz\n");
            } else
            {
                printf("%d\n", contador);
            }
            contador ++;
            
    }

    return 0;
}