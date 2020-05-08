#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define NMAX 50000

struct Mass_Point{
    float r[3]; // r[0]:x, r[1]:y, r[2]:z
    float a[3];
    float m;
    char id[100];
};

int main(){

    int i, j, k;
    struct Mass_Point mp[NMAX];

    // read from file
    FILE *fp;
    fp = fopen("./input.txt", "r");
    if(fp == NULL){
        fprintf(stderr, "ERROR: Failed to open file.");
        exit(1);
    }
    for(i = 0; i < NMAX; i++){
        int res = fscanf(fp, "%s%f%f%f%f", mp[i].id, &(mp[i].m), &(mp[i].r[0]), &(mp[i].r[1]), &(mp[i].r[2]));
    }
    fclose(fp);

    // initialize
    for(i = 0; i < NMAX; i++){
        for(j = 0; j < 3; j++){
            mp[i].a[j] = 0;
        }
    }

    // main loop
    for(i = 0; i < NMAX-1; i++){
        for(j = i+1; j < NMAX; j++){
            float dr = 0;
            for(k = 0; k < 3; k++){
                dr += (mp[i].r[k] - mp[j].r[k]) * (mp[i].r[k] - mp[j].r[k]); 
            }
            dr = sqrtf(dr);
            for(k = 0; k < 3; k++){
                mp[i].a[k] += mp[j].m * (mp[j].r[k] - mp[i].r[k]) / (dr * dr * dr);
                mp[j].a[k] += mp[i].m * (mp[i].r[k] - mp[j].r[k]) / (dr * dr * dr);
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
        fprintf(fp, "%s %f %f %f\n", mp[i].id, mp[i].a[0], mp[i].a[1], mp[i].a[2]);
    }
    fclose(fp);

    return 0;
}

