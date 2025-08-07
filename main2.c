#include <stdio.h>
#include <stdlib.h>

int main () {

    int valor1, valor2, resultado;
    printf("informe o valor 1: ");
    scanf ("%d", &valor1) ;

    printf("informe o valor 2: ");
    scanf ("%d", &valor2);

    resultado = valor1 + valor2;

    printf("a soma é: %d", resultado);
}