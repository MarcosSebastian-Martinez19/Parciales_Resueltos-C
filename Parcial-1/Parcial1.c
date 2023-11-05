#include <stdio.h>
#include <stdbool.h>

// -- Ejercicio 1

int pedir_entero(char n) {
    int x;
    printf("Ingrese un valor que se almacenará en la variable %c \n", n);
    scanf("%d", &x);
    return x;
}

// void imprimir_booleano(int x) {
//     if(x == 0) {
//         printf("False");
//     } else {
//         printf("True");
//     }
// }

// int main(void) {
//     int x, y, ztemp;
//     bool z;
//     x = pedir_entero('x');
//     y = pedir_entero('y');
//     ztemp = pedir_entero('z');
//     z = ztemp;
//     bool expresion1 = (x == 8 + 3) || (y == 8 + 3) || z;
//     int expresion2 = (8 + 3 + x) % 3;
//     int expresion3 = ((x  * 8) + (y * 3));
//     bool expresion4 = (x != 0) && 0 <= ((8 - 3) / x) && !z;

//     printf("El resultado para la expresion (x == 8 + 3) || (y == 8 + 3) || z es: %s\n", (expresion1 == 1) ? "True" : "False");
//     printf("El resultado para la expresion (8 + 3 + x) mod 3 es: %d\n", expresion2);
//     printf("El resultado para la expresion ((x  * 8) + (y * 3)) es: %d\n", expresion3);
//     printf("El resultado para la expresion (x != 0) && 0 <= ((8 - 3) / x) && !z es: %s\n", (expresion4 == 1) ? "True" : "False");

//     return 0;
// }

// -- Ejercicio 2

// int main(void) {
//     int x, y, dni1, dni2, xaux;
//     x = pedir_entero('x');
//     y = pedir_entero('y');
//     xaux = x;
//     dni1 = 3;
//     dni2 = 8;
//     if((dni1 % 2 != 0) && (dni2 % 2 == 0)) {
//         x = x + dni1;
//         y = y + xaux;
//     }
//     if(dni1 % 2 == 0 && dni2 % 2 != 0) {
//         x = x + y;
//     }
//     printf("(x -> %d, y -> %d, dni1 -> %d, dni2 -> %d)\n",x, y, dni1, dni2);
//     return 0;
// }

// -- Ejercicio 3

void imprimir_entero(char n, int x) {
    printf("El valor del número almacenado en %c es: %d \n", n, x);
}

int main(void) {
    int x, y, i, res;
    x = pedir_entero('x');
    i = 1;
    y = 0;
    res = 0;
    while(i != x + 1) {
        y = y + i;
        i = i + 1;
        if(i % 2 == 0) {
            y = y - 1;
        }
        if(i % 2 != 0) {}
    printf("a%d: (x -> %d, y -> %d, i -> %d, res -> %d)\n", i - 1, x, y, i, res);
    }
    res = (y * 2) + (x % 2);
    imprimir_entero('r', res);

    return 0;
}