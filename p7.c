#include <stdio.h>

int inverte(int n, int acumulador){
    if(n == 0){
        return acumulador;
    }

    int ultimoDigito = n % 10;
    int novoAcumulador = (acumulador * 10) + ultimoDigito;

    return inverte(n/10, novoAcumulador);
}

int ehPalindromo(int n){
    if(n < 0){
        return 0;
    }

    int n_invertido = inverte(n, 0);

    if(n == n_invertido){
        return 1;
    } else {
        return 0;
    }
}

int main(){
    int n1 = 121;
    int n2 = 12345;
    
    printf("O inverso de %d é: %d", n1, inverte(n1, 0));
    printf("O inverso de %d é: %d", n2, inverte(n2, 0));
    
    printf("O numero %D eh palindromo? %d", n1, ehPalindromo(n1));
    printf("O nuemro %d eh palindromo? %d", n2, ehPalindromo(n2));

    return 0;
}
