#include <stdio.h>

void selectionSort(int nums[], int cantidad) {
    printf("Algoritmo a utilizar para el ordenamiento: SelectionSort\n");
    for(int i=0; i<cantidad-1; i++) {
        int curr_min_idx = i;
        int aux;
        for(int j=i+1; j<cantidad; j++) {
            if(nums[curr_min_idx] > nums[j]) {
                curr_min_idx = j;
            }
        }
        aux = nums[i];
        nums[i] = nums[curr_min_idx];
        nums[curr_min_idx] = aux;
    }
}

void display(int nums[], int cantidad) {
    for(int i=0; i<cantidad; i++) {
        printf("Posición %d: %d\n", i, nums[i]);
    }
}

/* 
Escriba una función que recibe un arreglo de enteros y devuelve un nuevo arreglo que contiene a los elementos del primero en orden ascendente. 
Indique qué algoritmos de ordenación utiliza.
*/
int main() {
    int n;
    printf("Cantidad de números a guardar: \n");
    scanf("%d", &n);
    int nums[n];
    for(int i=0; i<n; i++) {
        printf("Ingrese el número a guardar: ");
        scanf("%d", &nums[i]);
    }
    printf("Pre-ordenamiento: \n");
    display(nums, n);
    selectionSort(nums, n);
    printf("Post-ordenamiento: \n");
    display(nums, n);
}