#include <stdio.h>

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

struct paridad_t {
    int n_pares;
    int n_impares;
};

struct paridad_t contar_paridad(int a[], int tam){
    struct paridad_t variable;
    int pares = 0;
    int impares = 0;
    int i = 0;
    while(i < tam) {
        if(a[i] % 2 == 0) {
            pares = pares + 1;
        } else{
            impares = impares + 1;
        }
        i = i + 1;
    }
    variable.n_pares = pares;
    variable.n_impares = impares;
    return variable;
};

int main(void) {
    const int N = 5;
    int a[N];
    pedir_arreglo(N, a);
    struct paridad_t x = contar_paridad(a, N);
    printf("Elementos pares: %d. Elementos impares: %d.", x.n_pares, x.n_impares);
    return 0;
}