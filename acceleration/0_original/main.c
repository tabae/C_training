#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define NMAX 10000

struct Mass_Point{
    double r[3]; // r[0]:x, r[1]:y, r[2]:z
    double a[3];
    double m;
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
        struct Mass_Point *ptr = mp + i;
        fscanf(fp, "%s%lf%lf%lf%lf", ptr->id, &(ptr->m), &(ptr->r[0]), &(ptr->r[1]), &(ptr->r[2]));
    }
    fclose(fp);

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
        fprintf(fp, "%s %lf %lf %lf\n", mp[i].id, mp[i].a[0], mp[i].a[1], mp[i].a[2]);
    }
    fclose(fp);

    return 0;
}

