#include <stdio.h>

int somaImpares(int x, int y){
    int soma = 0;

    if(x > y){
        for(int i = y + 1; i < x; i++){
            if(i % 2 != 0){
                soma += i;
            }
        }
    }
    else{
        for(int i = x + 1; i < y; i++){
            if(i % 2 != 0){
                soma += i;
            }
        }
    }

    return soma;
}

int main(void){
    int x, y;

    printf("Digite um intervalo de numeros naturais:");
    scanf("%d%d", &x, &y);

    printf("Soma dos impares no intervalo [%d, %d]: %d", x, y, somaImpares(x, y));

    return 0;
}
