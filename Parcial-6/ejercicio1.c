#include <stdio.h>
#include <assert.h>

int pedir_entero(char n) {
    int x;
    printf("Ingrese un valor que se almacenará en la variable %c \n", n);
    scanf("%d", &x);
    return x;
}

void imprimir_entero(char n, int x) {
    printf("El valor almacenado en %c es: %d \n", n, x);
}

int main(void) {
    int X, Y, Z, x, y, z;
    x = pedir_entero('x');
    y = pedir_entero('y');
    z = pedir_entero('z');
    X = x;
    Y = y;
    Z = z;
    assert(x == X && y == Y && z == Z && Y != 0 && z > 0);
    x = y + z;
    y = z % y;
    z = X / Y;
    assert(x == Y + Z && y == Z % Y && z == X / Y);
    imprimir_entero('x', x);
    imprimir_entero('y', y);
    imprimir_entero('z', z);
    return 0;
}