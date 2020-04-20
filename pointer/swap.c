#include <stdio.h>

void swap(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main(){
    int a = 1, b = 2;
    swap(&a, &b);
    printf("a: %d\nb: %d\n", a, b);
    return 0;
}