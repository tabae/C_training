#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    if(argc < 2){
        fprintf(stderr, "Invalid argments\n");
        exit(1);
    }

    long long N = atoi(argv[1]);
    float *a = (float *)malloc(N * sizeof(float));

    a[0] = 0;
    int i;
    for(i = 1; i < N; i++){
        a[i] = a[i-1] + i;
    }

    printf("%f\n", a[N-1] - a[0]);

    free(a);
    a = NULL;
    return 0;
}