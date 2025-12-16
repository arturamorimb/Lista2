#include <stdio.h>

float mediaPositivos(float a, float b, float c, float d, float e, float f, float *total_ptr){
    float soma = 0;
    *total_ptr = 0; 

    if(a > 0){
        soma += a;
        (*total_ptr) += 1;
    }

    if(b > 0){
        soma += b;
        (*total_ptr) += 1;
    }

    if(c > 0){
        soma += c;
        (*total_ptr) += 1;
    }

    if(d > 0){
        soma += d;     
        (*total_ptr) += 1;
    }

    if(e > 0){
        soma += e;
        (*total_ptr) += 1;
    }

    if(f > 0){
        soma += f;
        (*total_ptr) += 1;
    }

    if (*total_ptr > 0) {
        return soma / (*total_ptr);
    } else {
        return 0.0f;
    }
}

int main(void){
    float a, b, c, d, e, f;
    float contagem_positivos; 
    float media;              

    printf("Digite seis valores numericos: ");
    scanf("%f%f%f%f%f%f", &a, &b, &c, &d, &e, &f);

    media = mediaPositivos(a, b, c, d, e, f, &contagem_positivos);

    printf("Desses valores, %.0f sao positivos, e a media entre eles eh %.2f\n", 
           contagem_positivos, media);
    
    return 0;
}
