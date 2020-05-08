#include <stdio.h>

int main(){
   int a = 8;
   int *pa = NULL; // ポインタ宣言時はNULLで初期化！

   printf("&a : %p\n&pa: %p\npa : %p\n", &a, &pa, pa);

   pa = &a; // paにaのアドレスを代入
   printf("&a: %p\npa: %p\n", &a, pa);
   printf("a  : %d\n*pa: %d\n", a, *pa);

   *pa = 2; // paが指している先のデータを2に変更
   printf("&a: %p\npa: %p\n", &a, pa);
   printf("a  : %d\n*pa: %d\n", a, *pa);

   a = 4;
   printf("&a: %p\npa: %p\n", &a, pa);
   printf("a  : %d\n*pa: %d\n", a, *pa);
}
