#include <stdio.h>

#define NMAX 100

int main(){
    int a[NMAX];

    a[0] = 0;
    int i;
    for(i = 1; i < NMAX; i++){
        a[i+1] = a[i] + i*i;
    }

    printf("%d\n", a[NMAX-1] - a[0]);
    return 0;
}