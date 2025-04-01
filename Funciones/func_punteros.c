#include <stdio.h>
#include <math.h>

//Funcion que recibe dos punteros y realiza operaciones entre ellos
void operacion_punteros(float *, double *);

int main(int argc, char const *argv[]){
    double coseno;
    float cubo;

    operacion_punteros(&cubo, &coseno);
    printf("Cubo = %f\n", cubo);
    printf("Coseno = %lf\n", coseno);

    return 0;
}

//Definición de la función
void operacion_punteros(float *var1, double *var2){
    //En la variable a la que apunta var1 voy a guardar el cubo de un numero
    //que ingresa el usuario y en la variaboe a la que apunta var 2 el factorial
    float dato;
    (*var1) = 999;
    printf("Ingresa un dato: \n");
    scanf("%f", &dato);
    (*var1) = pow(dato,3); //Aqui estoy haciendo desrreferenciación. Aqui guarda en la variable cubo = dato^3, con la dirección de memoria.
    (*var2) = cos(dato); //Guarda en la variable coseno = cos(dato)

}