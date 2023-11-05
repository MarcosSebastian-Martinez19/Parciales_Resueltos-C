#include <stdio.h>
#include <assert.h>

int pedir_entero(char n) {
    int x;
    printf("Ingrese un valor que se almacenará en la variable %c \n", n);
    scanf("%d", &x);
    return x;
}

int main(void) {
    int X, Y, Z, x, y, z;
    x = pedir_entero('x');
    y = pedir_entero('y');
    z = pedir_entero('z');
    X = x;
    Y = y;
    Z = z;
    assert(x == X && y == Y && z == Z && X != 0 && (Y % X == 0));
    x = y / x;
    y = y + z;
    z = X * Y;
    assert(x == Y / X && y == Y + Z && z == X * Y);
    printf("El valor de x es: %d. El valor de y es: %d. El valor de z es: %d.", x, y, z);
    return 0;
}