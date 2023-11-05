#include <stdio.h>
#define N 5

struct multiplos_t {
    int n_multiplos_dos;
    int n_multiplos_tres;
    int n_multiplos_cinco;
};

struct multiplos_t contar_multiplos(int a[], int tam) {
    struct multiplos_t multiplos;
    multiplos.n_multiplos_dos = 0;
    multiplos.n_multiplos_tres = 0;
    multiplos.n_multiplos_cinco = 0;
    int i = 0;
    while(i < tam) {
        if(a[i] % 2 == 0) {
            multiplos.n_multiplos_dos += 1;
        }
        if(a[i] % 3 == 0) {
            multiplos.n_multiplos_tres += 1;
        }
        if(a[i] % 5 == 0) {
            multiplos.n_multiplos_cinco += 1;
        }
        i = i + 1;
    }
    return multiplos;
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
    struct multiplos_t multiplos = contar_multiplos(a, N);
    printf("Múltiplos de 2: %d. Múltiplos de 3: %d. Múltiplos de 5: %d", multiplos.n_multiplos_dos, multiplos.n_multiplos_tres, multiplos.n_multiplos_cinco);
    return 0;
}