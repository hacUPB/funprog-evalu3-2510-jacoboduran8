# **Analisis del Reto 1**

|Contenido|
|---------|
|[Ley de Ohm](#ley-de-ohm)|
|[Factor de Potencia](#factor-de-potencia)|
|[Resistencia de un Conductor](#resistencia-de-un-conductor)|
|[Resistencia para un LED](#resistencia-para-un-led)|

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
            printf("Opcion invalida\n");
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
                scanf("%f", &param_1);
                printf("Ingrese el valor de la Resistencia (R) en Ohmios:\n");
                scanf("%f", &param_2);

                result_ohm = param_1 * param_2;

                printf("Voltaje = %f\n", result_ohm);
            
            case 2:
                printf("Ingrese el valor de Voltaje (V) en voltios:\n");
                scanf("%f", &param_1);
                printf("Ingrese valor de Resistencia (R) en amperios:\n");
                scanf("%f", &param_2);`

                if (param_2 == 0.0){
                    printf("No se puede dividir entre 0");
        
                } else {

                    result_ohm = param_1 / param_2;
                    printf("Corriente = %f \n", result_ohm);
                }
            
            case 3:
                printf("Ingrese el Voltaje (V) en voltios:\n");
                scanf("%f", &param_1);
                printf("Ingrese la Corriente (I) en amperios:\n);
                scanf("%f", &param_2);

                if (param_2 == 0.0){
                    printf("No se puede dividir entre 0);
                } else {
                    
                    result_ohm = param_1 / param_2
                    printf("Resistencia = %f", result_ohm);
                }

            case 4:
                printf("Eligiste salir al menu principal\n");
                break;
            
            default:
                printf("Opcion Invalida\n");
        }
    } while (Ohm !=4);


## Factor de Potencia
Aquí nos piden presentar un submenu donde se pregunta que parametro se desea calcular: potencia activa, potencia aparente o factor de potencia. Para eso es necesario nombrar las variables, todas van a ser `float` debido al tipo de dato que se requiere para las operaciones.

Para este menu de opciones se leera como `int Pot;`

- `pot_act` --> Potencia activa se mide en Watts (W)
- `pot_apa` --> Potencia aparente se mide en Volt-Amperes (VA)
- `fact_pot` -->  Factor de potencia no tiene unidad, es adimencional (Representa la eficiencia del sistema eléctrico)

Teniendo en cuenta estas variables se le debe de solicitar al usuario los valores correspondientes para realizar las siguientes operaciones;

- Para calcular la potencia activa se calcularia con `pot_act = pot_apa * fact_pot`. Cuando se vayan a pedir los valores se debe de especificar que los valores de potencia aparente deben de estar en Volt-Amperes (VA) y factor de potencia (Que no tiene ningún sistema de unidad).

- Para calcular la potencia aparente es la relación de la potencia activa y reactiva, por lo que se calcula: `pot_apa = pot_act / fact_pot`. Hay que tener en cuenta que los valores de potencia activa deben de estar dados en Watts y que el factor de potencia tiene que ser diferente de 0.

- Para calcular el factor de potencia es la relación entre la potencia activa y potencia aparente, por lo que se calularia: `fact_pot = pot_act / pot_apa`. Hay que decirle al usuario que la potencia activa debe de estar dada en Watts y que la potencia aparente aparte de estar dada Volt-Amperes, debe de ser diferente de 0.

        do{
            printf("1. Calcular Potencia Activa\n");
            printf("2. Calcular Potencia Aparente\n");
            printf("3. Calcular Factor de Potencia\n");
            printf("4. Volver al menu principal")

            switch(Pot){

                case 1:
                    printf("Ingrese la potencia aparente en Volt-Amperes (VA):\n");
                    scanf("%f", &pot_apa);
                    printf("Ingrese el factor de potencia:\n");
                    scanf("%f", &fact_pot);

                    pot_act = pot_apa * fact_pot;

                    printf("El Factor de Potencia: %f", pot_act);

                case 2:
                    printf("Ingrese potencia activa en Watts (W):\n");
                    scanf("%f", &pot_act);
                    printf("Ingrese factor de potencia:\n");
                    scanf("%f", &fact_pot);

                    if (fact_pot == 0.0){
                        printf("No se puede dividir entre 0.0\n");
                    } else {

                        pot_apa = pot_act / fact_pot;

                        printf("La Potencia Aparente: %f", pot_apa);
                    }
                
                case 3:
                    printf("Ingrese potencia activa en Watts (W):\n");
                    scanf("%f", &pot_act);
                    printf("Ingrese la potencia aparente en Volt-Amperes (VA):\n");
                    scanf("%f", &pot_apa);

                    if (pot_apa == 0.0){
                        printf("No se puede dividir entre 0.0\n");
                    } else {

                        fact_pot = pot_act / pot_apa

                        printf("El Factor de Potencia: %f", fact_pot);
                    }
                
                case 4:
                    printf("Elegiste salir al menu principal\n");
                    break;

                default:
                    printf("Opcion invalida\n");

            }
        } while (Pot !=4);


## Resistencia de un Conductor
En esta parte nos piden hacer un submenu que un pueda seleccionar uno un material conductor y este haga el calculo de resistencia entre oro, aluminio, cobre y otros. Para poder calcular todo esto hay que tener en cuenta ciertas variables como:

Estas variables son de tipo `float`:
- `resistividad` Significa la resistividad del material conductor y está dada en Ohm-metro.
- `coef_temp` Es el coeficiente de temperatura del material.
- `long` Es la longitud del conductor en metros
- `area` Es el área de la sección transversal del conductor en metros cuadrados.
- `temp` Es la temperatura de operación en grados celcius.
- `resist` Es la variable de salida del resultado del calculo.

Esta variable es de tipo `int`:
- `mat` La variable de selección del material del usuario.

### Primera parte
En esta primera parte se le preguntara al usuario que es lo que quiere elegir. Para esto se diseñaron estas 4 opciones:

        printf("1. Oro\n");
        printf("2. Aluminio\n");
        printf("3. Cobre\n");
        printf("4. Otro\n");
        printf("5. Volver al menu principal\n");
        scanf("%d", &mat);


### Segunda parte
En esta parte se diseño el menu para que el usuario escogiera entre ya 3 tipos de materiales con unos coeficientes de temperatura y resistividad preestablecidos y en el caso 4 de ser otro material que pregunte estas dos variables que son necesarias para realizar la operación. Y por último se harian las operaciones correctas para que se puede dar la operación completa.

        switch(material) {
            case 1:
                resistividad = 2.44e-8;
                coefTemp = 0.0034;
                
                printf("Ingrese la longitud del conductor (m): ");
                scanf("%f", &long);
                printf("Ingrese el area de la seccion transversal (m^2): ");
                scanf("%f", &area);
                printf("Ingrese la temperatura de operacion (°C): ");
                scanf("%f", &temp);

                resist = (resistividad * long / area) * (1 + coef_temp * (temp - 20));
                printf("Resistencia del Conductor: %.6f Ohm\n", resist);



            case 2:
                resistividad = 2.82e-8;
                coefTemp = 0.0040;

                printf("Ingrese la longitud del conductor (m): ");
                scanf("%f", &long);
                printf("Ingrese el area de la seccion transversal (m^2): ");
                scanf("%f", &area);
                printf("Ingrese la temperatura de operacion (°C): ");
                scanf("%f", &temp);

                resist = (resistividad * long / area) * (1 + coef_temp * (temp - 20));
                printf("Resistencia del Conductor: %.6f Ohm\n", resist);
                
            case 3:
                resistividad = 1.68e-8;
                coefTemp = 0.00393;
                
                printf("Ingrese la longitud del conductor (m): ");
                scanf("%f", &long);
                printf("Ingrese el area de la seccion transversal (m^2): ");
                scanf("%f", &area);
                printf("Ingrese la temperatura de operacion (°C): ");
                scanf("%f", &temp);

                resist = (resistividad * long / area) * (1 + coef_temp * (temp - 20));
                printf("Resistencia del Conductor: %.6f Ohm\n", resist);

            case 4:
                printf("Ingrese la resistividad (Ohm*m): ");
                scanf("%f", &resistividad);
                printf("Ingrese el coeficiente de temperatura: ");
                scanf("%f", &coef_temp);

                printf("Ingrese la longitud del conductor (m): ");
                scanf("%f", &long);
                printf("Ingrese el area de la seccion transversal (m^2): ");
                scanf("%f", &area);
                printf("Ingrese la temperatura de operacion (°C): ");
                scanf("%f", &temp);

                resist = (resistividad * long / area) * (1 + coef_temp * (temp - 20));
                printf("Resistencia del Conductor: %.6f Ohm\n", resist);

                
            case 5:
                printf("Elegiste volver al menu principal\n");
                break;

            default:
                printf("Opcion invalida.\n"); 
        }

### Tercera parte
En esta parte se juntaron las dos primeras partes y se metieron dentro de un `do-while`

        do{
            printf("1. Oro\n");
            printf("2. Aluminio\n");
            printf("3. Cobre\n");
            printf("4. Otro\n");
            printf("5. Volver al menu principal\n");
            scanf("%d", &mat);

            switch(mat) {
                case 1:
                    resistividad = 2.44e-8;
                    coefTemp = 0.0034;
                    
                    printf("Ingrese la longitud del conductor (m): ");
                    scanf("%f", &long);
                    printf("Ingrese el area de la seccion transversal (m^2): ");
                    scanf("%f", &area);
                    printf("Ingrese la temperatura de operacion (°C): ");
                    scanf("%f", &temp);

                    resist = (resistividad * long / area) * (1 + coef_temp * (temp - 20));
                    printf("Resistencia del Conductor: %.6f Ohm\n", resist);



                case 2:
                    resistividad = 2.82e-8;
                    coefTemp = 0.0040;

                    printf("Ingrese la longitud del conductor (m): ");
                    scanf("%f", &long);
                    printf("Ingrese el area de la seccion transversal (m^2): ");
                    scanf("%f", &area);
                    printf("Ingrese la temperatura de operacion (°C): ");
                    scanf("%f", &temp);

                    resist = (resistividad * long / area) * (1 + coef_temp * (temp - 20));
                    printf("Resistencia del Conductor: %.6f Ohm\n", resist);
                    
                case 3:
                    resistividad = 1.68e-8;
                    coefTemp = 0.00393;
                    
                    printf("Ingrese la longitud del conductor (m): ");
                    scanf("%f", &long);
                    printf("Ingrese el area de la seccion transversal (m^2): ");
                    scanf("%f", &area);
                    printf("Ingrese la temperatura de operacion (°C): ");
                    scanf("%f", &temp);

                    resist = (resistividad * long / area) * (1 + coef_temp * (temp - 20));
                    printf("Resistencia del Conductor: %.6f Ohm\n", resist);

                case 4:
                    printf("Ingrese la resistividad (Ohm*m): ");
                    scanf("%f", &resistividad);
                    printf("Ingrese el coeficiente de temperatura: ");
                    scanf("%f", &coef_temp);

                    printf("Ingrese la longitud del conductor (m): ");
                    scanf("%f", &long);
                    printf("Ingrese el area de la seccion transversal (m^2): ");
                    scanf("%f", &area);
                    printf("Ingrese la temperatura de operacion (°C): ");
                    scanf("%f", &temp);

                    resist = (resistividad * long / area) * (1 + coef_temp * (temp - 20));
                    printf("Resistencia del Conductor: %.6f Ohm\n", resist);

                    
                case 5:
                    printf("Elegiste volver al menu principal\n");
                    break;

                default:
                    printf("Opcion invalida.\n"); 
            }

        } while (mat !=5);

## Resistencia para un LED