#include <stdio.h>
int main()
{
    int i = 100, *p1, *p2;
    p1 = &i;
    p2 = p1;
    if (p1 == p2)
    { // Estamos comparando dos punteros
        printf("p1 apunta a la misma direccion de memoria que p2\n");
    }
    *p1 = *p1 + 2; // El * tiene más prioridad que el +
    printf("El valor de * p2 es % d\n", *p2);
    (*p2)++; // Ante la duda de prioridades usamos paréntesis
    printf("El valor de * p1 es % d\n", *p1);
    i--;
    printf("El valor de i es % d\n", i);

    return 0;
}

// La conclución p1 y p2 apuntan a la misma variable