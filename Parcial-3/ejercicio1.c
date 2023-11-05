#include <stdio.h>
#include <assert.h>

int pedir_entero(char n) {
    int x;
    printf("Ingrese un valor para %c: \n", n);
    scanf("%d", &x);
    return x;
}

int main(void) {
    int R,S,r,s;
    r = pedir_entero('r');
    s = pedir_entero('s');
    R = r;
    S = s;
    assert(r == R && s == S && S > R);
    s = 2 * r - 2 * s;
    r = 2 * R + S;
    assert(s == 2 * R - 2 * S && r == 2 * R + S);
    printf("El valor de s es: %d y el valor de r es: %d.", s, r);
    return 0;
}