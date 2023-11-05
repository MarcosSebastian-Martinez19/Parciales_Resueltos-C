#include <stdio.h>
#include <limits.h>
#define N 5

struct s_paridad_t {
    int max_par;
    int min_par;
    int sum_par;
};

struct s_paridad_t stats_paridad(int a[], int tam) {
    struct s_paridad_t par;
    int i = 0;
    par.max_par = INT_MIN;
    par.min_par = INT_MAX;
    par.sum_par = 0;
    while(i < tam) {
        if(a[i] % 2 == 0) {
            if(a[i] > par.max_par) {
                par.max_par = a[i];
            }
            if(a[i] < par.min_par) {
                par.min_par = a[i];
            }
            par.sum_par += a[i];
        }
        i = i + 1;
    }
    return par;
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
    struct s_paridad_t stats = stats_paridad(a, N);
    printf("Máximo par: %d. Mínimo par: %d. Suma par: %d.", stats.max_par, stats.min_par, stats.sum_par);
    return 0;
}