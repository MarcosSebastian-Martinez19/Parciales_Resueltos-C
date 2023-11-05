#include <stdio.h>
#include <assert.h>

int suma_multiplo(int a[], int tam, int k) {
    int suma_total = 0;
    int i = 0;
    while(i < tam) {
        if(a[i] % a[k] == 0) {
            suma_total = suma_total + a[i];
        }
        i = i + 1;
    }
    return suma_total;
}

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
    const int N = 5;
    int a[N];
    pedir_arreglo(N, a);
    int k = pedir_entero('k');
    assert(k >= 0  && k < N);
    int suma_total = suma_multiplo(a, N, k);
    printf("La suma total de los multiplos de %d, es: %d.", a[k], suma_total);
    return 0;
}