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

                if (param_2 <= 0.0){
                    printf("No se puede tener resistencias negativas o iguales a 0");
                    break;
                }

                result_Ohm = param_1 * param_2;

                printf("Voltaje = %f\n", result_Ohm);
                break;
            
            case 2:
                printf("Ingrese el valor de Voltaje (V) en voltios:\n");
                scanf("%f", &param_1);
                printf("Ingrese valor de Resistencia (R) en Ohmios:\n");
                scanf("%f", &param_2);`

                if (param_2 <= 0.0){
                    printf("No se puede dividir entre 0 o no se puede tener una resistencia negativa");
                    break;
        
                } else {

                    result_Ohm = param_1 / param_2;
                    printf("Corriente = %f \n", result_Ohm);
                    break;
                }
            
            case 3:
                printf("Ingrese el Voltaje (V) en voltios:\n");
                scanf("%f", &param_1);
                printf("Ingrese la Corriente (I) en amperios:\n);
                scanf("%f", &param_2);

                if (param_2 == 0.0 ){
                    printf("No se puede dividir entre 0);
                    break;
                } else {
                    
                    result_Ohm = param_1 / param_2
                    printf("Resistencia = %f", result_Ohm);
                    break;
                }

            case 4:
                printf("Eligiste salir al menu principal\n");
                break;
            
            default:
                printf("Opcion Invalida\n");
        }
    } while (Ohm !=4);

// Cabe recalcar que en la resistencia debe de ser un valor positivo. Por lo que se puede solucionar con un `if` en los casos que se pida resistencia, para que cuando se ingrese un valor menor que 0, diga error y que se vuelva a repetir el bucle.


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
                    break;

                case 2:
                    printf("Ingrese potencia activa en Watts (W):\n");
                    scanf("%f", &pot_act);
                    printf("Ingrese factor de potencia:\n");
                    scanf("%f", &fact_pot);

                    if (fact_pot == 0.0){
                        printf("No se puede dividir entre 0.0\n");
                        break;
                    } else {

                        pot_apa = pot_act / fact_pot;

                        printf("La Potencia Aparente: %f", pot_apa);
                        break;
                    }
                
                case 3:
                    printf("Ingrese potencia activa en Watts (W):\n");
                    scanf("%f", &pot_act);
                    printf("Ingrese la potencia aparente en Volt-Amperes (VA):\n");
                    scanf("%f", &pot_apa);

                    if (pot_apa == 0.0){
                        printf("No se puede dividir entre 0.0\n");
                        break;
                    } else {

                        fact_pot = pot_act / pot_apa

                        printf("El Factor de Potencia: %f", fact_pot);
                        break;
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
                break;



            case 2:
                resistividad = 2.82e-8;
                coef_temp = 0.0040;

                printf("Ingrese la longitud del conductor (m): ");
                scanf("%f", &long);
                printf("Ingrese el area de la seccion transversal (m^2): ");
                scanf("%f", &area);
                printf("Ingrese la temperatura de operacion (°C): ");
                scanf("%f", &temp);

                resist = (resistividad * long / area) * (1 + coef_temp * (temp - 20));
                printf("Resistencia del Conductor: %.6f Ohm\n", resist);
                break;
                
            case 3:
                resistividad = 1.68e-8;
                coef_temp = 0.00393;
                
                printf("Ingrese la longitud del conductor (m): ");
                scanf("%f", &long);
                printf("Ingrese el area de la seccion transversal (m^2): ");
                scanf("%f", &area);
                printf("Ingrese la temperatura de operacion (°C): ");
                scanf("%f", &temp);

                resist = (resistividad * long / area) * (1 + coef_temp * (temp - 20));
                printf("Resistencia del Conductor: %.6f Ohm\n", resist);
                break;

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
                break;

                
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
                    scanf("%f", &longi);
                    printf("Ingrese el area de la seccion transversal (m^2): ");
                    scanf("%f", &area);
                    printf("Ingrese la temperatura de operacion (°C): ");
                    scanf("%f", &temp);

                    resist = (resistividad * longi / area) * (1 + coef_temp * (temp - 20));
                    printf("Resistencia del Conductor: %.6f Ohm\n", resist);
                    break;



                case 2:
                    resistividad = 2.82e-8;
                    coefTemp = 0.0040;

                    printf("Ingrese la longitud del conductor (m): ");
                    scanf("%f", &longi);
                    printf("Ingrese el area de la seccion transversal (m^2): ");
                    scanf("%f", &area);
                    printf("Ingrese la temperatura de operacion (°C): ");
                    scanf("%f", &temp);

                    resist = (resistividad * longi / area) * (1 + coef_temp * (temp - 20));
                    printf("Resistencia del Conductor: %.6f Ohm\n", resist);
                    break;
                    
                case 3:
                    resistividad = 1.68e-8;
                    coefTemp = 0.00393;
                    
                    printf("Ingrese la longitud del conductor (m): ");
                    scanf("%f", &longi);
                    printf("Ingrese el area de la seccion transversal (m^2): ");
                    scanf("%f", &area);
                    printf("Ingrese la temperatura de operacion (°C): ");
                    scanf("%f", &temp);

                    resist = (resistividad * longi / area) * (1 + coef_temp * (temp - 20));
                    printf("Resistencia del Conductor: %.6f Ohm\n", resist);
                    break;

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

                    resist = (resistividad * longi / area) * (1 + coef_temp * (temp - 20));
                    printf("Resistencia del Conductor: %.6f Ohm\n", resist);
                    break;

                    
                case 5:
                    printf("Elegiste volver al menu principal\n");
                    break;

                default:
                    printf("Opcion invalida.\n"); 
            }

        } while (mat !=5);

## Resistencia para un LED
Para este submenu se deben de solicitar ciertas variables, donde algunas pueden ser de tipo `int` y otras `float`. Las variables que el usuario debe de ingresar son:

- `tens_fnt` --> Que seria la tensión de la fuente en voltios (V) --> `float`
- `num_leds` --> Es el número de ledes que se conectaran al circuito --> `int`
- `conex` --> Es el tipo de conexión de los ledes, si es en paralelo o en serie. --> `int`
- `tens_nom` --> Es la tensión nominal del LED en voltios. --> `float`
- `corr_nom` --> Es la corriente nominal del LED en voltios en amperios. --> `float`

Después de tener todos estos datos, es necesario calcular las siguientes cosas:

- Valor de la resistencia (R) --> `resist`
- Potencia de la resistencia (PR) --> `pot_resist`
- Potencia total del circuito (PTOTAL) --> `pot_tot`
- Corriente total suministrada por la fuente (ITOTAL) --> `corr_tot`

Para esto es necesario primero analizar como seria el posible circuito, para ver que es lo que piden y como lo podemos calcular, teniendo en cuenta las leyes de Ohm y formulas basicas de calculo de resistencia y potencia. Por ende es muy importante saber que hacer si los LEDES estan en paralelos o en serie, que procedimiento se debe de realizar.

Si la conexión es en serie el voltaje total es la suma de voltajes de cada LED: `tens_tot = tens_nom * num_leds`. Y la corriente en este caso el la misma para todos los LEDS: `corr_tot = corr_nom`. Aquí se crea una nueva variable para almacenar la tensión total del circuito `tens_tot`.

Si la conexión es en paralela el voltaje total es el mismo que la tensión nominal. Y la corrriente es la suma de corrientes de cada LED: `corr_tot = corr_nom * num_leds`.

Hay que hacer una condición con `if` o `if-else` para que verifique que el voltaje de la fuente es mayor que el voltaje total de los LEDES `tens_fnt > tens_nom`.

Ya con estos valores se puede calcular el resto de resistencias y potencias que nos piden calcular.

- `resist = (tens_fnt - tens_nom) / corr_tot` --> Esta formula es para el valor de la resistencia.
- `pot_resist = (tens_fnt - tens_nom) * corr_tot` --> Esta formula es para calcular la potencia de la resistencia
- `pot_tot = tens_fnt * corr_tot` --> Esta formula calcula la potencia total del circuito.

Y ahora así quedaria el codigo. Y para hacer que se repita hasta que el usuario lo quiera se puede meter dentro de un `switch` y un `do-while`.

    do{
        printf("1. Calcular Resistencia para un LED\n 2. Volver al menu principal");
        scanf("%d", &RLED);

        switch (RLED){
            case 1:
                printf("Ingrese la tensión de la fuente (V): ");
                scanf("%f", &tens_fnt);
                printf("Ingrese el número de LEDs: ");
                scanf("%d", &num_leds);
                printf("Ingrese el tipo de conexión (serie (0)/paralelo(1)): ");
                scanf("%d", &conex);
                printf("Ingrese la tensión nominal del LED (V_f): ");
                scanf("%f", &tens_nom);
                printf("Ingrese la corriente nominal del LED (A): ");
                scanf("%f", &corr_nom);

                if (conex == 0){
                    tens_tot = tens_nom * num_leds;
                    corr_tot = corr_nom;
                } else if (conex == 1){
                    corr_tot = corr_nom * num_leds;
                } else{
                    printf("Opcion incorrecta, vuelve a intentar\n");
                    return;
                }

                if (tens_fnt <= tens_nom){
                    printf("La tensión de la fuente debe de ser mayor que la tension nominal del LED\n");
                    return;
                }

            resist = (tens_fnt - tens_nom) / corr_tot;
            pot_resist = (tens_fnt - tens_nom) * corr_tot;
            pot_tot = tens_fnt * corr_tot

            printf("Valor de la resistencia (En Ohmios): %.2f \n", resist);
            printf("Potencia de la resistencia (En Watts): %.2f W\n", pot_resist);
            printf("Potencia total del circuito (En Watts): %.2f W\n", pot_tot);
            printf("Corriente total suministrada por la fuente (en Amperios): %.2f A\n", corr_total);
            break;
            
            case 2:
                printf("Elegiste volver al menu principal\n");
        }
    } while (RLED !=2);
     return;


Hasta que terminamos el analisis de los diferentes recursos que le debemos de proporcionar al usuario para que calcule cualquier de estas cosas.

## Debuggin
En este apartado se documentara los cambios que se hagan o se encuentren al momento de ejecutar el codigo y encontrar posibles errores que hagan qu eel codigo falle y quede en un bucle infinito.