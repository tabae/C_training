#include <stdio.h>
#include <stdlib.h>

#define array(i, j) array[NMAX * (i) + (j)]
#define NMAX 10

int main(){
    int *array = (int *)malloc(NMAX * NMAX * sizeof(int));
    int i, j;
    for(i = 0; i < NMAX; i++){
        for(j = 0; j < NMAX; j++){
            array(i, j) = i * j;
        }
    }

    for(i = NMAX; i < NMAX * NMAX; i++){
        if(i % NMAX != 0) printf("%2d ", array[i]);
        if(i % NMAX == NMAX-1) printf("\n");
    }

    free(array);
    array = NULL;
    return 0;
}