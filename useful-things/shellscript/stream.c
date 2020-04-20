#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

int main(int argc, char *argv[]){

    if(argc < 2){
        fprintf(stderr, "USAGE: ./exe [array size] \n");
        exit(1);
    } 

    const long long NMAX = atoi(argv[1]);
    
    double *a = NULL, *b = NULL, *c = NULL;
    double scalar = 4.0;

    a = (double *)malloc(NMAX * sizeof(double));
    b = (double *)malloc(NMAX * sizeof(double));
    c = (double *)malloc(NMAX * sizeof(double));
    
    long long i;
    #pragma omp parallel for private(i)
    for(i = 0; i < NMAX; i++){
        a[i] = 1.0;
        b[i] = 2.0;
        c[i] = 3.0;
    }

    double srt, end;
    
    srt = omp_get_wtime();

    #pragma omp parallel for private(i, scalar)
    for(i = 0; i < NMAX; i++){
        c[i] = a[i] + b[i] * scalar;
    }

    end = omp_get_wtime();

    printf("Array size: \t%lld\n", NMAX);
    printf("Elapsed time: \t%lf[sec]\n", end - srt);

    return 0;

}