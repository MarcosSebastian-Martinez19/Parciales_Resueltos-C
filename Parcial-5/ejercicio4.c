#include <stdio.h>
#define N 5

struct persona {
    int dni;
    float altura;
};

struct alturas_t {
    int n_altos;
    int n_bajos;
};

struct alturas_t contar_altos_y_bajos(struct persona a[], int tam, float alt) {
    struct alturas_t alturas;
    int i = 0;
    alturas.n_altos = 0;
    alturas.n_bajos = 0;
    while(i < tam) {
        if(a[i].altura < alt) {
            alturas.n_bajos += 1;
        } else {
            alturas.n_altos += 1;
        }
        i = i + 1;
    }
    return alturas;
};

int pedir_dni() {
    int x;
    printf("Ingrese el dni: \n");
    scanf("%d", &x);
    return x;
}

float pedir_altura() {
    float x;
    printf("Ingrese la altura: \n");
    scanf("%f", &x);
    return x;
}

void pedir_arreglo_asociaciones(int n_max, struct persona a[]) {
    int i = 0;
    while (i < n_max) {
        a[i].dni = pedir_dni();
        a[i].altura = pedir_altura();
        i = i + 1;
    }
}

int main(void) {
    struct persona a[N];
    pedir_arreglo_asociaciones(N, a);
    float alt = pedir_altura();
    struct alturas_t altura = contar_altos_y_bajos(a, N, alt);
    printf("Personas más altas que %f: %d. Personas más bajas que %f: %d.", alt, altura.n_altos, alt, altura.n_bajos);
    return 0;
}