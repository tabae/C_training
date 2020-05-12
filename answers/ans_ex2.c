#include <stdio.h>
#include <stdlib.h>
#define NMAX 100
#define DEBUG

typedef struct CityInfo{
    char name[100];
    double lat;
    double lng;
}city;

void swap(city *a, city *b){
    city tmp = *a;
    *a = *b;
    *b = tmp;
}

int main(){

    int i, j;
    city a[NMAX];

    // read from file
    FILE *fp;
    fp = fopen("./test.txt", "r");
    if(fp == NULL){
        fprintf(stderr, "ERROR: Failed to open file.");
        exit(1);
    }
    for(i = 0; i < NMAX; i++){
        fscanf(fp, "%s%lf%lf", a[i].name, &a[i].lat, &a[i].lng);
    }
    fclose(fp);

    // bubble sort
    for(i = 0; i < NMAX-1; i++){
        for(j = i + 1; j < NMAX; j++){
            if(a[i].lat > a[j].lat) swap(&a[i], &a[j]);
            if(a[i].lat == a[j].lat && a[i].lng > a[j].lng) swap(&a[i], &a[j]);
        }
    }

    // output
    for(i = 0; i < NMAX; i++){
        #ifdef DEBUG
        printf("%s %lf %lf\n", a[i].name, a[i].lat, a[i].lng);
        #else
        printf("%s\n", a[i].name);
        #endif
    }

    return 0;
}