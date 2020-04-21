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

int main(int argc, char *argv[]){

    if(argc < 2){
        fprintf(stderr, "ERROR: Invalid arguments.\n");
        exit(1);
    }

    FILE *fp;
    fp = fopen(argv[1], "r");
    if(fp == NULL){
        fprintf(stderr, "ERROR: Failed to open file.");
        exit(1);
    }

    int N;
    fscanf(fp, "%d", &N);

    float *a = (float *)malloc(N * sizeof(float));
    float *b = (float *)malloc(N * sizeof(float));
    
    if(a == NULL || b == NULL){
        fprintf(stderr, "ERROR: Failed to allocate memory.\n");
        exit(1);
    }

    int i;
    for(i = 0; i < N; i++) fscanf(fp, "%f", &a[i]);
    for(i = 0; i < N; i++) fscanf(fp, "%f", &b[i]);

    fclose(fp);

    printf("%f\n", dot_product(a, b, N));

    free(a); a = NULL;
    free(b); b = NULL;
    return 0;
}