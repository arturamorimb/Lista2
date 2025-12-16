#include <stdio.h>


int passos(int n){
    if(n == 1){
        return 0;
    }

    if(n % 2 == 0){
        return 1 + passos(n / 2);
    }
    else{
        return 1 + passos(n - 1);
    }
}

int main(){
    int n1 = 12;
    int n2 = 11;
    int n3 = 0;

    printf("Numero: %d | Passos: %d\n", n1, passos(n1));
    printf("Numero: %d | Passos: %d\n", n2, passos(n2));
    printf("Numero: %d | Passos: %d", n3, passos(n3));

    return 0;
}
