# **Bitácora Jacobo Durán Aristizábal**
|Contenido|
|---------|
|[Difinición términos básicos](#definición-términos-básicos)|
|[Preguntas de Control de Comprensión - Actividad 1](#preguntas-de-control-de-comprensión---actividad-1)|
|[Referencias](#referencias)|

## Definición términos básicos

- **Código fuente:** Son el conjunto de líneas de texto que están en un determinado lenguaje de programación y son las instrucciones originales de ejecuciíon de un algoritmo o programa en específico. [1]

- **Código objeto:** Es la traducción de un código fuente a un lenguaje binario, los cuales contienen instrucciones directas para el procesador y su correcta ejecución. [2]

- **Lenguaje ensamblador:** Es un intermediario entre el código de máquina y los lenguajes de alto nivel. [3]

- **Compilador:** Es un programa que traduce el código fuente de un proyecto a código máquina antes de que se ejecute. [4]

- **¿Cuál es la diferencia entre un lenguaje compilado y uno interpretado?:** La diferencia está en cómo se traduce el código fuente a instrucciones ejecutables por la máquina.

## Preguntas de Control de Comprensión - Actividad 1

1. ¿Cuál es la función principal del preprocesador en C?

La principal función del preprocesador es analizar el código fuente y realizar cmabios antes de la compilación.

2. ¿Por qué se dice que el código objeto (.o) no es directamente ejecutable?

Porque es una representación intermedia generada por el compilador, y para que sea ejecutable se necesita enlazar con el linker.

3. ¿Qué diferencia existe entre el código ensamblador (.s) y el código objeto (.o)?

El código `.s`es un archivo generado por el compilador mientras que el archivo `.o` es el reultado en el ensamblador y contiene información en codigo binario para que la computadora lo pueda interpretar. Sin embargo, hasta ahí todavia no es ejecutable.

4. ¿Para qué sirve la opción `S` en GCC?

Esto indica que se debe de generar un código ensamblador en un archivo `.s`sin producir un archivo objeto. Y sirve para analizar el código que es generado por el compilador.

5. ¿Qué sucede si omitimos la etapa de linker?

Si se omite el linker no se podra combinar con otros archivos, por lo que no será ejecutable. Y cuando se escriba el comando `Wall` arrojara los errores que se encuentren.

## Referencias
[1] http://concepto.de/codigo-fuente/

[2] https://muytecnologicos.com/diccionario-tecnologico/codigo-objeto

[3] https://www.educaopen.com/digital-lab/blog/software/lenguaje-ensamblador

[4] https://www.ionos.com/es-us/digitalguide/paginas-web/desarrollo-web/compilador-e-interprete/#:~:text=Un%20compilador%20es%20un%20programa,c%C3%B3digo%20m%C3%A1quina%20antes%20de%20comenzar.
