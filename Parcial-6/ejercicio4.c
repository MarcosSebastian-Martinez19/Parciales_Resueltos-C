#include <stdio.h>
#define N 5

struct producto_t {
    int precio;
    int peso_en_kilos;
};

struct total_t {
    int precio_total;
    int peso_total;
};

struct total_t calcular_montos(struct producto_t a[], int tam) {
    struct total_t total;
    total.peso_total = 0;
    total.precio_total = 0;
    int i = 0;
    while(i < tam) {
        total.peso_total += a[i].peso_en_kilos;
        total.precio_total += a[i].precio;
        i = i + 1;
    }
    return total;
};

int pedir_precio() {
    int x;
    printf("Ingrese un precio: \n");
    scanf("%d", &x);
    return x;
}

int pedir_peso() {
    int x;
    printf("Ingrese el peso: \n");
    scanf("%d", &x);
    return x;
}

void pedir_arreglo_asociaciones(int n_max, struct producto_t a[]) {
    int i = 0;
    while (i < n_max) {
        a[i].precio = pedir_precio();
        a[i].peso_en_kilos = pedir_peso();
        i = i + 1;
    }
}

int main(void) {
    struct producto_t a[N];
    pedir_arreglo_asociaciones(N, a);
    struct total_t montos = calcular_montos(a, N);
    printf("El peso total es: %d. El precio total es: %d.", montos.peso_total, montos.precio_total);
    return 0;
}