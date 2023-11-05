#include <stdio.h>
#include <assert.h>

int pedir_entero(char n) {
    int x;
    printf("Ingrese un valor que se almacenará en la variable %c \n", n);
    scanf("%d", &x);
    return x;
}

int main(void) {
    int I, J, K, i, j, k;
    i = pedir_entero('i');
    j = pedir_entero('j');
    k = pedir_entero('k');
    I = i;
    J = j;
    K = k;
    assert(i == I && j == J && k == K && k > 0 && i > j);
    i = j + i;
    j = j + k;
    k = k + I;
    assert(i == J + I && j == J + K && k == K + I);
    printf("El valor de i es: %d. El valor de j es: %d. El valor de k es: %d.", i, j, k);
    return 0;
}