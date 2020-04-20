#include <stdio.h>

int main(){
    int a = 3;
    int *b = &a;
    printf("&a: %p, \tb: %p\n", &a, b);
    printf("a: %d, \t*b: %d\n", a, *b);

    a = 5;    
    printf("a: %d, \t*b: %d\n", a, *b);
    
    *b = -2;
    printf("a: %d, \t*b: %d\n", a, *b);
    
    return 0;
}