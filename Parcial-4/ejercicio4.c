#include <stdio.h>
#include <limits.h>
#define N 5

struct persona_t {
    int dni;
    float altura;
};

struct paridad_t {
    float altura_media;
    float altura_minima;
    float altura_maxima;
};

struct paridad_t calcular_estadistica(struct persona_t a[], int tam) {
    struct paridad_t persona;
    persona.altura_maxima = INT_MIN;
    persona.altura_minima = INT_MAX;
    persona.altura_media = 0;
    int i = 0;
    while(i < tam) {
        if(a[i].altura > persona.altura_maxima) {
            persona.altura_maxima = a[i].altura;
        }
        if(a[i].altura < persona.altura_minima) {
            persona.altura_minima = a[i].altura;
        }
        persona.altura_media += a[i].altura;
        i = i +1;
    }
    persona.altura_media = persona.altura_media / tam;
    return persona;
};

int pedir_dni() {
    int x;
    printf("Ingrese el dni: \n");
    scanf("%d", &x);
    return x;
}

int pedir_altura() {
    float x;
    printf("Ingrese la altura: \n");
    scanf("%f", &x);
    return x;
}

void pedir_arreglo_asociaciones(int n_max, struct persona_t a[]) {
    int i = 0;
    while (i < n_max) {
        a[i].dni = pedir_dni();
        a[i].altura = pedir_altura();
        i = i + 1;
    }
}

int main(void) {
    struct persona_t a[N];
    pedir_arreglo_asociaciones(N, a);
    struct paridad_t persona = calcular_estadistica(a, N);
    printf("Altura máxima: %f. Altura mínima: %f. Altura media: %f.", persona.altura_maxima, persona.altura_minima, persona.altura_media);
    return 0;
}