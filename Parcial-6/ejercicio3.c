#include <stdio.h>
#include <limits.h>
#define N 5

struct paridad_t {
    int maximo_par;
    int maximo_impar;
};

struct paridad_t maximo_paridad(int a[], int tam) {
    struct paridad_t maximo;
    int i = 0;
    maximo.maximo_impar = INT_MIN;
    maximo.maximo_par = INT_MIN;
    while (i < tam) {
        if(a[i] % 2 == 0 && a[i] > maximo.maximo_par) {
            maximo.maximo_par = a[i];
        }
        if(a[i] % 2 != 0 && a[i] > maximo.maximo_impar) {
            maximo.maximo_impar = a[i];
        }
        i = i + 1;
    }
    return maximo;
};

int pedir_entero(char n) {
    int x;
    printf("Ingrese un valor que se almacenará en la variable %c \n", n);
    scanf("%d", &x);
    return x;
}

void pedir_arreglo(int n_max, int a[]) {
    int i = 0;
    while (i < n_max) {
        a[i] = pedir_entero('a');
        i = i + 1;
    }
}

int main(void) {
    int a[N];
    pedir_arreglo(N, a);
    struct paridad_t resultado = maximo_paridad(a, N);
    printf("Máximo par: %d. Máximo impar: %d.", resultado.maximo_par, resultado.maximo_impar);
    return 0;
}