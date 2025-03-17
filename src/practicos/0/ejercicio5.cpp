#include <stdio.h>
using namespace std;

typedef struct rep_punto {
    int coordX , coordY ;
} Punto ;

typedef struct rep_colPuntos {
    int capacidad ;
    int cantidad ;
    Punto * arregloPuntos ;
} ColPuntos ;

void display(Punto punto) {
    printf("Punto(coordX=%d, coordY=%d)", punto.coordX, punto.coordY);
}

void display(ColPuntos puntos) {
    printf("ColPuntos(capacidad=%d, cantidad=%d, arregloPuntos=[", puntos.capacidad, puntos.cantidad);
    for(int i=0; i<puntos.cantidad; i++) {
        display(puntos.arregloPuntos[i]);
        if(i+1 == puntos.cantidad) {
            continue;
        }
        printf(", ");
    }
    printf("])\n");
}

/*
(a) Implemente una función que inserte un punto al final de una colección de puntos.
Si la cantidad de puntos es igual a la capacidad del arreglo la operación no tiene efecto.
*/
void insertarPunto(ColPuntos & colPtos, Punto pto) {
    if(colPtos.capacidad == colPtos.cantidad) {
        printf("La colección de puntos se encuentra llena.\n");
        return;
    }
    colPtos.arregloPuntos[colPtos.cantidad] = pto;
    colPtos.cantidad++;
}

ColPuntos* crearColPuntos(int capacidad) {
    ColPuntos* puntos = new ColPuntos();
    puntos->capacidad = capacidad;
    puntos->cantidad = 0;
    puntos->arregloPuntos = new Punto[capacidad];
    return puntos;
}

/*
(b) Defina e implemente una función que dada una colección de puntos devuelva el valor de la menor
coordenada x de sus puntos
*/
int xmin(ColPuntos puntos) {
    int xminimo = puntos.arregloPuntos[0].coordX;
    for(int i=1; i<puntos.cantidad; i++) {
        if(puntos.arregloPuntos[i].coordX < xminimo) {
            xminimo = puntos.arregloPuntos[i].coordX;
        }
    }
    return xminimo;
}

/*
(c) Defina e implemente una función que dados dos puntos devuelva el punto medio del segmento determinado por ambos
*/
Punto puntoMedio(Punto p1, Punto p2) {
    Punto *p_medio = new Punto();
    p_medio->coordX = (p1.coordX + p2.coordX) / 2;
    p_medio->coordY = (p1.coordY + p2.coordY) / 2;
    return *p_medio;
}

/*
Un punto en un plano cartesiano se representa como un par ordenado de números, de forma que el primer
número corresponde a la coordenada horizontal x y el segundo número a la coordenada vertical y.
Los siguientes tipos definen los conceptos punto y colección de puntos. La colección se representa con un
arreglo con tope.
*/
int main() {
    Punto *p1 = new Punto();
    p1->coordX = 2;
    p1->coordY = 4;
    Punto p2 = *p1;
    display(*p1);
    printf("\n");
    display(p2);
    printf("\n");
    
    ColPuntos *puntos = crearColPuntos(3);
    display(*puntos);

    insertarPunto(*puntos, *p1);
    p1->coordX = 4;
    printf("El valor de la menor coordenada x al momento es: %d\n", xmin(*puntos));
    insertarPunto(*puntos, *p1);
    printf("El valor de la menor coordenada x al momento es: %d\n", xmin(*puntos));
    display(*puntos);

    display(*p1);
    printf("\n");
    display(p2);
    printf("\n");
    Punto p_medio = puntoMedio(*p1, p2);
    display(p_medio);
    printf("\n");
    
    delete p1;
    delete puntos;

    return 0;
}