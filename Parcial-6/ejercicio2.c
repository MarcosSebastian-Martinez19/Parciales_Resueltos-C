#include <stdio.h>
#define N 5

int indice_maximo_par(int a[], int tam) {
    int i = 0;
    int i_max_par = -1;
    while(i < tam) {
        if(a[i] % 2 == 0 && i > i_max_par) {
            i_max_par = i;
        }
        i = i + 1;
    }
    return i_max_par;
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
    int a[N];
    pedir_arreglo(N, a);
    int i_max_par = indice_maximo_par(a, N);
    printf("El máximo indice con un número par es: %d.", i_max_par);
    return 0;
}