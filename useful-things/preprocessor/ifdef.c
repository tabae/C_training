#include <stdio.h>

//#define DEBUG

int main(){
    int a = 1, b = 2, c = 4, d = 4;
    int ans = (a + b) / c * d;

    #ifdef DEBUG
    printf("--- debug info ---\n");
    printf("a+b: %d\n", a+b);
    printf("(a+b)/c: %d\n", (a+b)/c);
    printf("--- --- --- --- --\n");
    #endif

    printf("answer is %d\n", ans);
    return 0;
}