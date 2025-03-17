#include <stdio.h>
#define MAX_CHARS 100

int ocurrencias(char frase[], int largo, char letra) {
   int conteo = 0;
   for(int i = 0; i < largo; i++) {
      // printf("La letra de la frase en la iteracion %d es %c\n", i, frase[i]);
      if(frase[i] == letra) {
         conteo++;
      }
   }
   return conteo;
}

/* 
Ejercicio 3 Ocurrencias
Se quiere implementar una función que cuente la cantidad de veces que una letra aparece en una frase.
La frase se representa como un arreglo de caracteres, y dado que se conoce que el largo máximo de
una frase es de 100 caracteres, la frase se implementa como char frase[100]. Usando esta representación
escriba una función Ocurrencias que recibe una frase, un natural llamado largo que representa el número
de caracteres en la frase, y el caracter a buscar (almacenado en la variable letra), y devuelve el número de
ocurrencias del carácter letra en el arreglo frase.
*/
int main()
{
   char frase[MAX_CHARS], letra;
   printf("Ingrese la frase a analizar (máximo de 100 carácteres):\n");
   fgets(frase, MAX_CHARS, stdin);
   printf("Ingrese la letra a contar en la frase:\n");
   scanf("%c", &letra);
   printf("La frase es: %s\n", frase);
   printf("La letra a contar es: %c\n", letra);
   printf("El número de ocurrencias de la letra es: %d\n", ocurrencias(frase, sizeof(frase), letra));
   return 0;
}