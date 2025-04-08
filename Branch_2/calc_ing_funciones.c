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
            
            case 4: 
                printf("Volviendo al menú principal...\n");
                break;

            default:
                printf("Opción inválida.\n");

        }
    } while (Ohm !=4)
}

void CalcularFactorPotencia(){
    int Pot;
    float pot_apa, fact_pot, pot_act;

    do {
        printf("Factor de Potencia\n");
        printf("1. Calcular Potencia Activa\n");
        printf("2. Calcular Potencia Aparente\n");
        printf("3. Calcular Factor de Potencia\n");
        printf("4. Volver al menú principal\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &Pot);

        switch (Pot) {
            case 1:
                printf("Ingrese la potencia aparente (VA): ");
                scanf("%f", &pot_apa);
                printf("Ingrese el factor de potencia: ");
                scanf("%f", &fact_pot);
                pot_act = pot_apa * fact_pot;
                printf("Potencia Activa = %.2f W\n", pot_act);
                break;

            case 2:
                printf("Ingrese la potencia activa (W): ");
                scanf("%f", &pot_act);
                printf("Ingrese el factor de potencia: ");
                scanf("%f", &fact_pot);

                if (fact_pot == 0.0) {
                    printf("No se puede dividir entre 0.\n");
                } else {
                    pot_apa = pot_act / fact_pot;
                    printf("Potencia Aparente = %.2f VA\n", pot_apa);
                }
                break;

            case 3:
                printf("Ingrese la potencia activa (W): ");
                scanf("%f", &pot_act);
                printf("Ingrese la potencia aparente (VA): ");
                scanf("%f", &pot_apa);

                if (pot_apa == 0.0) {
                    printf("No se puede dividir entre 0.\n");
                } else {
                    fact_pot = pot_act / pot_apa;
                    printf("Factor de Potencia = %.2f\n", fact_pot);
                }
                break;

            case 4:
                printf("Volviendo al menú principal...\n");
                break;

            default:
                printf("Opción inválida.\n");
        }
    } while (Pot != 4);
}

void CalcularResistenciaConductor(){
    int mat;
    float resistividad, coef_temp, longi, area, temp, resist

    do{
        printf("Resistencia de un Conductor\n");
        printf("1. Oro\n");
        printf("2. Aluminio\n");
        printf("3. Cobre\n");
        printf("4. Otro\n");
        printf("5. Volver al menu principal\n");
        scanf("%d", &mat);

        switch(mat) {
            case 1:
                resistividad = 2.44e-8;
                coef_temp = 0.0034;
                
                printf("Ingrese la longitud del conductor (m): ");
                scanf("%f", &longi);
                printf("Ingrese el area de la seccion transversal (m^2): ");
                scanf("%f", &area);
                printf("Ingrese la temperatura de operacion (°C): ");
                scanf("%f", &temp);
                if(area > 0){
                resist = (resistividad * longi / area) * (1 + coef_temp * (temp - 20));
                printf("Resistencia del Conductor: %.6f Ohm\n", resist);
                break;
                } else {
                    printf("No se puede tener un area menor o igual a 0\n");
                    break;
                }



            case 2:
                resistividad = 2.82e-8;
                coef_temp = 0.0040;

                printf("Ingrese la longitud del conductor (m): ");
                scanf("%f", &longi);
                printf("Ingrese el area de la seccion transversal (m^2): ");
                scanf("%f", &area);
                printf("Ingrese la temperatura de operacion (°C): ");
                scanf("%f", &temp);
                
                if (area > 0){
                resist = (resistividad * longi / area) * (1 + coef_temp * (temp - 20));
                printf("Resistencia del Conductor: %.6f Ohm\n", resist);
                break;
                } else {
                    printf("No se puede tener un area menor o igual a 0\n");
                    break;
                }
                
            case 3:
                resistividad = 1.68e-8;
                coef_temp = 0.00393;
                
                printf("Ingrese la longitud del conductor (m): ");
                scanf("%f", &longi);
                printf("Ingrese el area de la seccion transversal (m^2): ");
                scanf("%f", &area);
                printf("Ingrese la temperatura de operacion (°C): ");
                scanf("%f", &temp);
                
                if (area > 0){
                resist = (resistividad * longi / area) * (1 + coef_temp * (temp - 20));
                printf("Resistencia del Conductor: %.6f Ohm\n", resist);
                break;
                } else {
                    printf("No se puede tener un area menor o igual a 0\n");
                    break;
                }

            case 4:
                printf("Ingrese la resistividad (Ohm*m): ");
                scanf("%f", &resistividad);
                printf("Ingrese el coeficiente de temperatura: ");
                scanf("%f", &coef_temp);

                printf("Ingrese la longitud del conductor (m): ");
                scanf("%f", &longi);
                printf("Ingrese el area de la seccion transversal (m^2): ");
                scanf("%f", &area);
                printf("Ingrese la temperatura de operacion (°C): ");
                scanf("%f", &temp);

                if (area > 0){
                resist = (resistividad * longi / area) * (1 + coef_temp * (temp - 20));
                printf("Resistencia del Conductor: %.6f Ohm\n", resist);
                break;
                } else {
                    printf("No se puede tener un area menor o igual a 0\n");
                    break;
                }

                
            case 5:
                printf("Elegiste volver al menu principal\n");
                break;

            default:
                printf("Opcion invalida.\n"); 
        }

    } while (mat !=5);
}

void CalcularResistenciaLED(){
    int RLED, conex;
    float tens_fnt, num leds, tens_nom, corr_nom;

    do {
        printf("Resistencia para LED\n");
        printf("1. Calcular Resistencia para un LED\n");
        printf("2. Volver al menú principal\n");
        printf("Seleccione una opción: ");
        scanf("%d", &RLED);

        switch (RLED) {
            case 1:
                printf("Ingrese la tensión de la fuente (V): ");
                scanf("%f", &tens_fnt);
                printf("Ingrese el número de LEDs: ");
                scanf("%d", &num_leds);
                printf("Ingrese el tipo de conexión (0 = serie, 1 = paralelo): ");
                scanf("%d", &conex);
                printf("Ingrese la tensión nominal del LED (V_f): ");
                scanf("%f", &tens_nom);
                printf("Ingrese la corriente nominal del LED (A): ");
                scanf("%f", &corr_nom);

                if (conex == 0) {
                    tens_tot = tens_nom * num_leds;
                    corr_tot = corr_nom;
                } else if (conex == 1) {
                    corr_tot = corr_nom * num_leds;
                } else {
                    printf("Opción incorrecta, vuelve a intentar.\n");
                    break;
                }

                if (tens_fnt <= tens_tot) {
                    printf("Error: La tensión de la fuente debe ser mayor que la tensión total de los LEDs.\n");
                    break;
                }

                resist = (tens_fnt - tens_tot) / corr_tot;
                pot_resist = (tens_fnt - tens_tot) * corr_tot;
                pot_tot = tens_fnt * corr_tot;

                printf("Resistencia: %.2f Ω\n", resist);
                printf("Potencia de la resistencia: %.2f W\n", pot_resist);
                printf("Potencia total: %.2f W\n", pot_tot);
                printf("Corriente total: %.2f A\n", corr_tot);
                break;

            case 2:
                printf("Volviendo al menú principal...\n");
                break;

            default:
                printf("Opción inválida.\n");
        }
    } while (RLED != 2);
}