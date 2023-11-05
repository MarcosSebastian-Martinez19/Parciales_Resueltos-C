#include <stdio.h>
#define N 5

struct cantidad_t {
    int n_multiplos_dos;
    int n_multiplos_tres;
};

struct cantidad_t contar_multiplos(int a[], int tam){
    struct cantidad_t contador;
    contador.n_multiplos_dos = 0;
    contador.n_multiplos_tres = 0;
    int i = 0;
    while(i < tam) {
        if((a[i] % 3) == 0){
            contador.n_multiplos_tres += 1;
        }
        if((a[i] % 2) == 0){
            contador.n_multiplos_dos += 1;
        }
        i = i + 1;
    }
    return contador;
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
    struct cantidad_t x = contar_multiplos(a, N);
    printf("Múltiplos de 2: %d. Múltiplos de 3: %d.", x.n_multiplos_dos, x.n_multiplos_tres);
    return 0;
}