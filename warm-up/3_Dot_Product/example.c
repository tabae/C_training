#include <stdio.h>

int main(){
    float a[5] = {0, 0.5, 1.0, 1.5, 2.0};
    float b[5] = {2.5, 3.0, 3.5, 4.0, 4.5};

    int i;
    float ans = 0;
    for(i = 0; i < 5; i++){
        ans += a[i] * b[i];
    }

    printf("%f\n", ans);
    return 0;
}