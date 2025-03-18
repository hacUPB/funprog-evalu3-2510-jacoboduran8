#include <stdio.h>

int main() {
    int numero;

    printf("Ingrese un número para ver la tabla de multiplicar: ");
    scanf("%d", &numero);

    printf("\nTabla de multiplicar del %d:\n", numero);
    
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }

    return 0;
}
