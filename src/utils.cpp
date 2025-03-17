#include <stdio.h>

int length(char *string) {
    char * aux;
    for(aux=string; *aux != '\0'; aux++);
    return aux - string;
}

void display(char *string) {
    printf("%s\n", string);
}