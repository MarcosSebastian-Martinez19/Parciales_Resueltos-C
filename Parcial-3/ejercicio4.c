#include <stdio.h>
#include <limits.h>
#define N 5

struct producto_t {
    int codigo;
    int cantidad;
};

struct stats_t {
    float cantidad_media;
    int cantidad_minima;
    int cantidad_maxima;
};

struct stats_t calcular_estadisticas(struct producto_t a[], int tam) {
    struct stats_t resultado;
    resultado.cantidad_maxima = INT_MIN;
    resultado.cantidad_media = 0;
    resultado.cantidad_minima = INT_MAX;
    int i = 0;
    while(i < tam) {
        if(a[i].cantidad > resultado.cantidad_maxima) {
            resultado.cantidad_maxima = a[i].cantidad;
        }
        if(a[i].cantidad < resultado.cantidad_minima) {
            resultado.cantidad_minima = a[i].cantidad;
        }
        resultado.cantidad_media += a[i].cantidad;
        i = i + 1;
    }
    resultado.cantidad_media = resultado.cantidad_media / tam;
    return resultado;
};

int pedir_codigo() {
    int x;
    printf("Ingrese un código: \n");
    scanf("%d", &x);
    return x;
}

int pedir_cantidad() {
    int x;
    printf("Ingrese la cantidad: \n");
    scanf("%d", &x);
    return x;
}

void pedir_arreglo_asociaciones(int n_max, struct producto_t a[]) {
    int i = 0;
    while (i < n_max) {
        a[i].codigo = pedir_codigo();
        a[i].cantidad = pedir_cantidad();
        i = i + 1;
    }
}

int main(void) {
    struct producto_t a[N];
    pedir_arreglo_asociaciones(N, a);
    struct stats_t x = calcular_estadisticas(a, N);
    printf("Cantidad media: %f. Cantidad mínima: %d. Cantidad máxima: %d.", x.cantidad_media, x.cantidad_minima, x.cantidad_maxima);
    return 0;
}