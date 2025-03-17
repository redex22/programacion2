#include <stdio.h>

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
   int a, b;
   printf("Ingrese un número entero positivo A y uno B (separados por un espacio): \n");
   scanf("%d %d", &a, &b);
   printf("A es: %d\n", a);
   printf("B es: %d\n", b);
   if(a < 1 || b < 1) {
      printf("A y B deben de ser números positivos.\n");
      return -1;
   }
   for(int i=a; i <= b; i++) {
      bool es_primo = true;
      for(int j=2; j < 10; j++) {
         if((i % j == 0) && i != j) {
            es_primo = false;
         }
      }
      if(es_primo) {
         printf("%d\n", i);
      }
   }
   return 0;
}
