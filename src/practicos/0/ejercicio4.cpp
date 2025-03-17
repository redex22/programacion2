#include <stdio.h>
#include <ctype.h>
#include "../../includes/utils.h"
#define MAX_CHARS 100

bool es_palindrome(char * frase) {
    int len_frase = length(frase);
    int j = len_frase-1;
    for(int i=0; i < len_frase; i++) {
        if(toupper(frase[i]) != toupper(frase[j])) {
            return false;
        }
        j--;
    }
    return true;
}

/*
Considere ahora que la frase se representa como un arreglo de caracteres implementado como char
*frase.
(a) ¿Qué diferencias hay entre esta representación y la que utilizó en el Ejercicio 3?
(b) Escriba una función EsPalindrome que recibe una frase representada como un puntero a char y devuelve TRUE si la misma es un palíndrome, FALSE en otro caso
*/
int main() {
    char *frase = new char[MAX_CHARS];
    printf("Ingrese la frase a analizar (máximo de 100 carácteres):\n");
    scanf("%s", frase);
    printf("¿Es palindrome?\n%s\n", es_palindrome(frase) ? "true" : "false");
    return 0;
}