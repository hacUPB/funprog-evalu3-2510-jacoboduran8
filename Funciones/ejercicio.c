/*
Crear una función que recibe tres números y el puntero a una variable llamada promedio.
La función calcula el promedio de los tres números y escribe el resultado utilizando el puntero.
El promedio se imprime en la función principal.

gcc nombre.c -Wall -Lm -o nombre --> Para incluir la libreria matemática al momento de compilar
*/

#include <stdio.h>
#include <math.h>

void promedio(float, float, float, float*);

int main(int argc, char const *argv[]){
   
    float num1, num2, num3, prom;

    printf("Ingrese dato 1: \n");
    scanf("%f", &num1);
    printf("Ingrese dato 2: \n");
    scanf("%f", &num2);
    printf("Ingrese dato 3: \n");
    scanf("%f", &num3);             //Aquí se piden los datos para que la función haga el promedio

    promedio(num1, num2, num3, &prom); //Aquí ya se llama la función

    printf("El promedio de los valores escogidos es: %f\n", prom);

    return 0;
}

void promedio(float dato1, float dato2, float dato3, float *prom)
{
    (*prom) = (dato1 + dato2 + dato3) / 3.0; //Y aquí ya se hace la desrreferencicación
}