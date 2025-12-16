#include <stdio.h>

int minMax(int a, int b, int c, int *min, int *max){
    int temp_max = a;
    int temp_min = b;

    if(b > temp_max){
        temp_max = b;
    }
    
    if(b < temp_min){
        temp_min = b;
    }

    if(c > temp_max){
        temp_max = c;
    }

    if(c < temp_min){
        temp_min = c;
    }

    *min = temp_min;
    *max = temp_max;

    return *min, *max;
}
