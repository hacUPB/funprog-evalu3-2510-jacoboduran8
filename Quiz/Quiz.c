#include <stdio.h>

int main(){
    float notas;
    float promedio; // Se agrego este float promedio;
    float sum_notas = 0; // Se agrego este float sum_notas = 0;
    int i = 0; // Se corrigio a i=0

    do{
        printf("Ingrese las notas\n");
        scanf("%f", &notas); // Se corrigio este scanf

        if (notas <= 5.0 & notas >= 0.0){
            sum_notas = notas + sum_notas; // Se corrigio esta operación con las nuevas variables
            i++;
        } else {
            printf("Nota invalida\n");
        }

    }while (notas !=-1);

    promedio = sum_notas/i; // Se puso esta operación fuera del do-while

    printf("Se ingresaro %d notas\n", i); // Se corrigieron las comillas
    printf("Promedio final: %f",promedio);

    return 0;
}