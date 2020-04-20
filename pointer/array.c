#include <stdio.h>

int main(){
    int a[3] = {2, 3, 5};

    printf("a: \t%p\n", a);

    int i;
    for(i = 0; i < 3; i++){
        printf("&a[%d]: \t%p\n", i, &a[i]);
    }

    for(i = 0; i < 3; i++){
        printf("a+%d: \t%p\n", i, a+i);
    }

    for(i = 0; i < 3; i++){
        printf("*(a+%d): \t%d\n", i, *(a+i));
    }
    return 0;
}