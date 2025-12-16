#include <stdio.h>

void fatoresPrimos(int n, int divisor) {
    if (n == 1) {
        return;
    }

    if (n % divisor == 0) {
        printf("%d", divisor);
        if (n / divisor != 1) {
            printf(" x ");
        }
        fatoresPrimos(n / divisor, divisor);
    } else {
        if (divisor == 2) {
            fatoresPrimos(n, divisor + 1);
        } else {
            fatoresPrimos(n, divisor + 2);
        }
    }
}

int main(void) {
    int N;

    printf("Digite um numero inteiro N para decomposicao em fatores primos: ");
    scanf("%d", &N);

    if (N <= 1) {
        printf("A decomposicao de %d em fatores primos nao e definida.\n", N);
    } else {
        printf("%d = ", N);
        fatoresPrimos(N, 2);
        printf("\n");
    }

    return 0;
}