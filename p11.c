#include <stdio.h>

int reduz(int *a, int *b) {
    int contador = 0;

    while (*a != *b) {
        if (*a > *b) {
            *a = *a - *b;
        } else {
            *b = *b - *a;
        }
        contador++;
    }

    return contador;
}

int main(void) {
    int x, y;
    int operacoes;

    printf("Digite o primeiro numero inteiro (A): ");
    scanf("%d", &x);

    printf("Digite o segundo numero inteiro (B): ");
    scanf("%d", &y);

    int a_inicial = x;
    int b_inicial = y;

    operacoes = reduz(&x, &y);

    printf("\nProcesso de Reducao:\n");
    printf("Numeros Iniciais: A=%d, B=%d\n", a_inicial, b_inicial);
    printf("Valor Estabilizado (A = B): %d\n", x);
    printf("Operacoes realizadas ate a estabilizacao: %d\n", operacoes);

    return 0;
}