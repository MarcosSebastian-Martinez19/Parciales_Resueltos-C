#include <stdio.h>

int pedir_entero(char n) {
    int x;
    printf("Ingrese un valor que se almacenará en la variable %c \n", n);
    scanf("%d", &x);
    return x;
}

float pedir_float(char n) {
    float x;
    printf("Ingrese un valor que se almacenará en la variable %c \n", n);
    scanf("%f", &x);
    return x;
}

void pedir_arreglo(int n_max, int a[]) {
    int i = 0;
    while (i < n_max) {
        a[i] = pedir_entero('a');
        i = i + 1;
    }
}

struct persona_t {
    int dni;
    float altura;
};

struct stats_t {
    float altura_media;
    float altura_minima;
    float altura_maxima;
};

struct stats_t calcular_estadisticas(struct persona_t a[], int tam) {
    struct stats_t variable;
    int i = 0;
    float altura_media = 0;
    float altura_minima = a[0].altura;
    float altura_maxima = a[0].altura;
    while (i < tam) {
        if(a[i].altura < altura_minima) {
            altura_minima = a[i].altura;
        }
        if(a[i].altura > altura_maxima) {
            altura_maxima = a[i].altura;
        }
        altura_media = altura_media + a[i].altura;
        i = i + 1;
    }
    altura_media = altura_media / tam;
    variable.altura_maxima = altura_maxima;
    variable.altura_minima = altura_minima;
    variable.altura_media = altura_media;
    return variable;
};

void pedir_arreglo_asociaciones(int n_max, struct persona_t a[]) {
    int i = 0;
    while (i < n_max) {
        a[i].dni = pedir_entero('i');
        a[i].altura = pedir_float('a');
        i = i + 1;
    }
}

int main(void) {
    const int N = 5;
    struct persona_t a[N];
    pedir_arreglo_asociaciones(N, a);
    struct stats_t x;
    x = calcular_estadisticas(a, N);
    printf("Altura máxima: %f. Altura mínima: %f. Altura media: %f.", x.altura_maxima, x.altura_minima, x.altura_media);
    return 0;
}