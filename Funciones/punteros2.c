int suma(int *, int *);

int main(int argc, char const *argv[]){
    int resultado, num1, num2;
    num1 = 100;
    num2 = 400;
    resultado = suma(&num1, &num2); 
    printf("suma = %d\n", resultado);
    printf("num1 = %d, num2 = %d\n", num1, num2); // En est ejemplo ya si cambia el valor de num1 y num2, ya que como en el ejemplo anterior se le está cambiando el valor de esas dos variables.
    return 0;
}
 
int suma(int *ptr_n1, int *ptr_n2) // Aquí ya estoy cambiando por valores de punteros, que son los de las variables que tenemos
{
    int res_suma;
    res_suma = (*ptr_n1) + (*ptr_n2);
    (*ptr_n1) = 999;
    (*ptr_n2) = 777;
    return res_suma; // Esto es todo lo que retorna cuando llamo la función en el main
}