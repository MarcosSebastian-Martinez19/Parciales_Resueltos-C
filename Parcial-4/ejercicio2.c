#include <stdio.h>
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

int suma_divisibles(int a[], int tam, int d) {
    int suma_total = 0;
    int i = 0;
    while(i < tam) {
        if(a[i] % d == 0) {
            suma_total += a[i];
        }
        i = i + 1;
    }
    return suma_total;
}

int main(void) {
    int a[N];
    pedir_arreglo(N, a);
    int d = pedir_entero('d');
    int suma_total = suma_divisibles(a, N, d);
    printf("La suma total de los elementos del array divisibles por %d es: %d", d, suma_total);
    return 0;
}