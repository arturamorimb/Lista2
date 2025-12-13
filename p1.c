#include <stdio.h>

int somaDigitos(int n){
    if(n < 10){
        return n;
    }

    return (n % 10) + somaDigitos(n / 10);
}

int main(void){
    int x;

    printf("Digite um numero inteiro:");
    scanf("%d", &x);

    printf("Soma = %d", somaDigitos(x));

    return 0;
}
