#include <stdio.h>

int somaMultiplos(int inicio, int fim, int k){
    int soma = 0;

    for(int i = inicio; i <= fim; i++){

        if(i % k == 0){
            soma += i;
        }
    }

    return soma;
}


int main(void){
    int inicio, fim, k;
    
    printf("Inicio:");
    scanf("%d", &inicio);

    printf("Fim:");
    scanf("%d", &fim);

    printf("Divisor comum:");
    scanf("%d", &k);

    printf("Soma dos multiplos de %d no intervalo [%d, %d]: %d", k, inicio, fim, somaMultiplos(inicio, fim, k));
}
