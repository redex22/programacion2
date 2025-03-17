#include <stdio.h>

/*
Calcula el promedio de clase para un alumno dada las 4 notas más altas entre 5 notas posibles.

@param int nota1, la primer nota del curso
@param int nota2, la segunda nota del curso
@param int nota3, la tercera nota del curso
@param int nota4, la cuarta nota del curso
@param int nota5, la quinta nota del curso

@return float el promedio de las 4 notas mas altas.
*/
float PromClase(int nota1, int nota2, int nota3, int nota4, int nota5) {
    int notas[5] = {nota1, nota2, nota3, nota4, nota5};
    int nota_minima = nota1;
    int sum_notas = 0;
    for(int i = 0; i < 5; i++) {
        if(notas[i] < nota_minima) {
            nota_minima = notas[i];
        }
        sum_notas += notas[i];
    }
    sum_notas -= nota_minima;
    return (sum_notas) / 4;
}

/*
Ejercicio 1 Promedio clase
Suponga que a los estudiantes de programación 2 se les dice que su calificación final será el promedio de
las cuatro calificaciones más altas de entre las cinco que hayan obtenido en el curso.
(a) Escribir una función llamada PromClase con cinco parámetros de entrada (las calificaciones obtenidas)
que realice dicho cálculo y lo devuelva.
(b) Escribir un programa principal (main ()) que permita ejecutar la función PromClase. Dicho programa
deberá leer de la entrada estándar (teclado) 5 calificaciones, invocar al procedimiento PromClase con
dichos parámetros, y finalmente mostrar en la salida estándar (pantalla) el resultado.
*/
int main() {
   int* notas = new int[5];
   int nota;
   float prom_clase;
   for(int i = 0; i < 5; i++) {
    printf("Ingrese su nota N°%d:\n", i + 1);
    scanf("%d", &nota);
    notas[i] = nota;
    printf("Nota N°%d guardada con valor: %d\n", i + 1, notas[i]);
   }
   prom_clase = PromClase(notas[0], notas[1], notas[2], notas[3], notas[4]);
   printf("El promedio de calificaciones es de: %f\n", prom_clase);
   delete [] notas;
   return 0;
}
