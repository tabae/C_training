#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define NMAX 50000

float r[NMAX][3];
float a[NMAX][3];
float m[NMAX];
char id[NMAX][100];

int main(){

    int i, j, k;

    // read from file
    FILE *fp;
    fp = fopen("./input.txt", "r");
    if(fp == NULL){
        fprintf(stderr, "ERROR: Failed to open file.");
        exit(1);
    }
    for(i = 0; i < NMAX; i++){
        int res = fscanf(fp, "%s%f%f%f%f", id[i], &m[i], &(r[i][0]), &(r[i][1]), &(r[i][2]));
    }
    fclose(fp);

    // initialize
    for(i = 0; i < NMAX; i++){
        for(j = 0; j < 3; j++){
            a[i][j] = 0;
        }
    }

    // main loop
    float dr[NMAX];
    for(i = 0; i < NMAX-1; i++){
        for(j = i+1; j < NMAX; j++){
            dr[j] = 0;
            for(k = 0; k < 3; k++){
                dr[j] += (r[i][k] - r[j][k]) * (r[i][k] - r[j][k]); 
            }
            dr[j] = sqrtf(dr[j]);
        }
        for(j = i+1; j < NMAX; j++){
            for(k = 0; k < 3; k++){
                a[i][k] += m[j] * (r[j][k] - r[i][k]) / (dr[j] * dr[j] * dr[j]);
                a[j][k] += m[i] * (r[i][k] - r[j][k]) / (dr[j] * dr[j] * dr[j]);
            }
        }
    }

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

    return 0;
}

