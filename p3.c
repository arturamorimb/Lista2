#include <stdio.h>

int somaDiv(int n, int d){
    if(d <= 1) return 1;

    int soma = somaDiv(n, d - 1);

    if(n % d == 0) soma += d;

    return soma;
}

void ehPerfeito(int n){
    if((somaDiv(n, n - 1) == n) && (n > 1)){
        printf("eh perfeito\n");
        return;
    }

    printf("nao eh perfeito\n");
}

int main(){
    int n;
    scanf("%d", &n);

    ehPerfeito(n);

    return 0;
}
