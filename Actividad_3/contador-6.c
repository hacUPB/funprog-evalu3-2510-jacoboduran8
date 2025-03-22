#include <stdio.h>

int main() {
    int numero;
    printf("Ingrese el numero hasta el que quiere imprimir la secuencia: \n");
    scanf("%d", &numero);

    for(int i = 1; i <= numero; i ++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    for(int i = numero - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
    
    return 0;
}