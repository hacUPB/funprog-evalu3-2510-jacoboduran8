#include <stdio.h>

void CalcularLeyOhm();
void CalcularFactorPotencia();
void CalcularResistenciaConductor();
void CalcularResistenciaLED();

int main(){
    int opcion;
    do{
        printf("1. Calcular Ley de Ohm\n");
        printf("2. Calcular Factor de Potencia\n");
        printf("3. Calcular Resistencia de un Conductor\n");
        printf("4. Calcular Resistencia para un LED\n");
        printf("5. Salir\n");
        printf("Seleccione una opcion:");
        scanf("%d", &opcion);

        switch(opcion){
            case 1: CalcularLeyOhm();
                break;
            case 2: CalcularFactorPotencia();
                break;
            case 3: CalcularResistenciaConductor();
                break;
            case 4: CalcularResistenciaLED();
                break;
            case 5:
                printf("Saliendo del programa\n");
                break;
            default:
                printf("Opcion invalida. Intente nuevamente\n");
        }
    } while (opcion !=5);
    
    return 0;
}

// Hasta acá se crearon los menús de lo que el usuario debe elegir para pode calcular cualquier de estas cosas. Se llama a la funcion dentro de cada caso, que estan hechas con "void"

void CalcularLeyOhm(){
    int Ohm;
    float param_1, param_2, result_Ohm;
    do{
        printf("Ley de Ohm\n");
        printf("1. Calcular Voltaje\n");
        printf("2. Calcular Corriente\n");
        printf("3. Calcular Resistencia\n");
        printf("4. Volver al menú principal\n");
        printf("Seleccione una opción: \n");
        scanf("%d", &Ohm);
        printf("Ten en cuenta las siguientes formulas para ingresar los datos correctamente enorden\n");
        printf("Voltaje (V) = Corriente (I) x Resistencia (Ohmios)\n");
        printf("Corriente (I) = Voltaje (V) / Resistencia (Ohmios)\n");
        printf("Resistencia (Omios) = Voltaje (V) / Corriente (I)\n");
        printf("Por favor ingrese los valores en el mismo orden en el que estan en las formulas\n");

        printf("Ingrese el primer valor: \n");
        scanf("%f", &param_1);
        printf("Ingrese el segundo valor: \n");
        scanf("%f", &param_2);

        switch (Ohm){
            case 1:
                result_Ohm = param_1 * param_2;
                printf("Voltaje = %.2f V\n", result_Ohm);
                break;
            
            case 2:
                if(param_2 <= 0.0){
                    printf("No se puede tener resistencias menores o iguales a 0.0\n");
                    break;
                } else {
                    result_Ohm = param_1 / param_2;
                    printf("Corriente = %.2f A\n", result_Ohm);
                    break;
                }
            
            case 3:
                if (param_2 == 0.0){
                    printf("No se puede dividir entre 0.0\n");
                    break;
                } else {
                    result_Ohm = param_1 / param_2;
                    printf("Resistencia = %.2f Oms\n", result_Ohm);
                    break;
                }

        }
    }
}

