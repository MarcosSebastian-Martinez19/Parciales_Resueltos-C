#include <stdio.h>
#include <assert.h>

int pedir_entero(char n) {
    int x;
    printf("Ingrese un valor que se almacenará en la variable %c \n", n);
    scanf("%d", &x);
    return x;
}

int main(void) {
    int R, S, r, s;
    r = pedir_entero('r');
    s = pedir_entero('s');
    R = r;
    S = s;
    assert(r == R && s == S && S > R);
    r = s - r;
    s = R + s;
    assert(r == S - R && s == R + S);
    printf("El valor de r es: %d y el valor de s es: %d", r, s);
    return 0;
}