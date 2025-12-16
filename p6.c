#include <stdio.h>

int somaDivisores(int n, int d){
    if(d >= n){
        return 0;    
    }

    if(n % d ==0){
        return d + somaDivisores(n, d + 1);
    }
    else{
        return somaDivisores(n, d + 1);
    }
}

int amigos(int a, int b){
    if(a == b){
        return 0;
    }

    int somaA = somaDivisores(a, 1);
    int somaB = somaDivisores(b, 1);

    if(somaA == somaB){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int n1 = 220;
    int n2 = 284;

    int n3 = 10;
    int n4 = 15;

    if(amigos(n1, n2)){
        printf("%d e %d SAO AMIGOS");
    }
    else{
        printf("%d e %d NAO SAO AMIGOS");
    }

    if(amigos(n3, n4)){
        printf("%d e %d SAO AMIGOS");
    }
    else{
        printf("%d e %d NAO SAO AMIGOS");
    }

    return 0;
}