# **Analisis del Reto 1**

## Primer menú
Como nos piden que desarrollemos un menú, la mejor opción para realizarlo seria usar un `switch`, para así crear los casos para cada menú.

Por lo que aquí lo mejor para hacerlo. Sin tener en cuenta cada caso sería

    do {
        printf("1. Calcular Ley de Ohm\n");
        printf("2. Calcular Factor de Potencia\n");
        printf("3. Calcular Resistencia de un Conductor\n");
        printf("4. Calcular Valor de la Resitencia para un LED\n");
        printf("5. Salir\n");
        scanf("%d", &opcion);

        switch (opcion){
            case 1:
                
            case 2:
                
            case 3:
                
            case 4:
                
            case 5: 
                break;
        default: 
        }
    } while (opcion !=5);
Aquí las variables que se tendrian serían `int opcion;`.

## Ley de Ohm
Aquí se debe de presentar un submenú para que el usuario elija un opción para calcular: voltaje, corriente o resistencia. Hay que tener en cuenta que para poder calcular esto se debe de pedir dos parametros y estos pueden ser decimales. Por lo que se tendran las siguientes variables: `float param_1;` y `float param_2`. Y una variable de salida llamada `float result_Ohm;`.

Y hay que tener otra variable para la elección de opción `int Ohm`.

Hay que preguntarle al usuario los parametros necesarios para calcular lo deseado

- Para calcular Voltaje (V) se debe de pedir corriente (I) en amperios y resistencia (R) en Ohmios.  `result_Ohm = param_1 * param_2`. Hay que tener en cuenta que para `param_1` se le deben asignar los valores de Corriente (I) y  para `param_2` se le deben de asignar los valores de Resistencia (R).

- Para calcular Corriente (I) se debe de pedir Voltaje (V) en voltios y Resistencia (R) en Ohmios. `result_Ohm = param_1 / param_2`. Hay que tener en cuente que en este caso `param_1` debe de tener asignados los valores de Voltaje (V) y `param_2` los valores de Resistencia (R).

- Para calcular Resistencia (I) se debe de pedir Voltaje (V) en voltios y Corriente (I) en amperios. `result_Ohm = param_1 / param_2`. Hay que tener en cuenta que para este caso es necasario asignarle a `param_1` los valores de Voltaje (V) y para `param_2` los valores de Corriente (I).

** Nota: ** Tener en cuenta que hay que poner los casos especiales. Buscarlos y buscar en el codigo como ejecutarlos. 

    
    do {
        printf("1. Calcular Voltaje\n");
        printf("2. Calcular Corriente\n");
        printf("3. Calcular resistencia\n");
        printf("4. Volver al menú principal\n");
        scanf("%d", &Ohm);

        switch(Ohm){
            case 1:
                printf("Ingresa el valor de la Corriente (I) en amperios:\n");
                scanf("%f", param_1);
                printf("Ingrese el valor de la Resistencia (R) en Ohmios:\n");
                scanf("%f", param_2);

                result_ohm = param_1 * param_2;

                printf("Voltaje = %f\n", result_ohm);
            
            case 2:
                printf("Ingrese el valor de Voltaje (V) en voltios:\n");
                scanf("%f", param_1);
                printf("Ingrese valor de Resistencia (R) en amperios:\n");
                scanf("%f", param_2);`

                if (param_2 == 0.0){
                    printf("No se puede dividir entre 0");
        
                } else {

                    result_ohm = param_1 / param_2;
                    printf("Corriente = %f \n", result_ohm);
                }
            
            case 3:
                printf("Ingrese el Voltaje (V) en voltios:\n");
                scanf("%f", param_1);
                printf("Ingrese la Corriente (I) en amperios:\n);
                scanf("%f", param_2);

                if (param_2 == 0.0){
                    printf("No se puede dividir entre 0);
                } else {
                    
                    result_ohm = param_1 / param_2
                    printf("Resistencia = %f", result_ohm);
                }



        }
    } while (Ohm !=4);