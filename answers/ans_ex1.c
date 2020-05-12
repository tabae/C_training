#include <stdio.h>

void filter(int *a, int *b, int n){
    int i;
    for(i = 0; i < n; i++){
        if(a[i] < b[i]){
            int tmp = a[i];
            a[i] = b[i];
            b[i] = tmp;
        }
    }
}

int main(){
    int i;
    int a[5] = {1, 2, 4, 6, 9};
    int b[5] = {2, 1, 3, 7, 9};
    
    filter(a, b, 5);
    
    // output
    printf("a: ");
    for(i = 0; i < 5; i++) printf("%d ", a[i]);
    printf("\nb: ");
    for(i = 0; i < 5; i++) printf("%d ", b[i]);
    printf("\n");
}