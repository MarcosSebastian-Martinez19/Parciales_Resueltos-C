#include <stdio.h>
#include <limits.h>
#include <assert.h>
#define N 5

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

int multiplo_maximo(int a[], int tam, int k){
    int maximo = INT_MIN;
    int i = 0;
    while(i < tam) {
        if(a[i] % k == 0 && a[i] > maximo) {
            maximo = a[i];
        }
        i = i + 1;
    }
    return maximo;
}

int main(void) {
    int a[N];
    pedir_arreglo(N, a);
    int k = pedir_entero('k');
    assert(k != 0);
    int maximo = multiplo_maximo(a, N, k);
    printf("El múltiplo máximo de %d es: %d.", k, maximo);
    return 0;
}