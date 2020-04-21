#include <stdio.h>
#include <stdlib.h>

float dot_product(float *a, float *b, int n){
    int i;
    float ret = 0;
    for(i = 0; i < n; i++){
        ret += a[i] * b[i];
    }
    return ret;
}

int main(){

    int N;
    scanf("%d", &N);

    float *a = (float *)malloc(N * sizeof(float));
    float *b = (float *)malloc(N * sizeof(float));
    
    if(a == NULL || b == NULL){
        fprintf(stderr, "ERROR: Failed to allocate memory.\n");
        exit(1);
    }

    int i;
    for(i = 0; i < N; i++) scanf("%f", &a[i]);
    for(i = 0; i < N; i++) scanf("%f", &b[i]);

    printf("%f\n", dot_product(a, b, N));

    free(a); a = NULL;
    free(b); b = NULL;
    return 0;
}