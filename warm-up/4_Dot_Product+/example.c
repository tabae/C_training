#include <stdio.h>

float dot_product(float *a, float *b, int n){
    int i;
    float ret = 0;
    for(i = 0; i < n; i++){
        ret += a[i] * b[i];
    }
    return ret;
}

int main(){
    float a[5] = {0, 0.5, 1.0, 1.5, 2.0};
    float b[5] = {2.5, 3.0, 3.5, 4.0, 4.5};

    printf("%f\n", dot_product(a, b, 5));
    return 0;
}