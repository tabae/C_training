#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <omp.h>

#define NMAX 50000

float r[NMAX][3]; // r[0] : x, r[1] : y, r[2] : z
float a[NMAX][3];
float m[NMAX];
char id[NMAX][100];

float cnt_sqrtf(float a){
    return sqrtf(a);
}

int main(){

    int i, j, k;

    float srt = omp_get_wtime();

    // read from file
    FILE *fp;
    fp = fopen("./input.txt", "r");
    if(fp == NULL){
        fprintf(stderr, "ERROR: Failed to open file.");
        exit(1);
    }
    for(i = 0; i < NMAX; i++){
        fscanf(fp, "%s%f%f%f%f", id[i], &m[i], &r[i][0], &r[i][1], &r[i][2]);
    }
    fclose(fp);

    printf("read: %f\n", omp_get_wtime() - srt);

    srt = omp_get_wtime();

    // initialize
    for(i = 0; i < NMAX; i++){
        for(j = 0; j < 3; j++){
            a[i][j] = 0;
        }
    }

    float dr[NMAX];

    // main loop

//    #pragma omp parallel for private(dr, i, j) shared(a)
    for(i = 0; i < NMAX-1; i++){
        for(j = i+1; j < NMAX; j++){
            dr[j] = 0;
            for(k = 0; k < 3; k++){
                dr[j] += (r[i][k] - r[j][k]) * (r[i][k] - r[j][k]); 
            }
            dr[j] = sqrtf(1/dr[j]);            
        }
        for(j = i+1; j < NMAX; j++){
            for(k = 0; k < 3; k++){
                a[i][k] += m[j] * (r[j][k] - r[i][k]) * (dr[j] * dr[j] * dr[j]);
                a[j][k] += m[i] * (r[i][k] - r[j][k]) * (dr[j] * dr[j] * dr[j]);
            }
        }
    }

    printf("main: %f\n", omp_get_wtime() - srt);

    srt = omp_get_wtime();
    // write to file
    fp = fopen("./output.txt", "w");
    if(fp == NULL){
        fprintf(stderr, "ERROR: Failed to open file.");
        exit(1);
    }
    for(i = 0; i < NMAX; i++){
        fprintf(fp, "%s %f %f %f\n", id[i], a[i][0], a[i][1], a[i][2]);
    }
    fclose(fp);

    printf("write: %f\n", omp_get_wtime() - srt);

    return 0;
}

