#include <stdio.h>

int main(){

    int a = 10;
    int *pointer = &a;
    
    printf("Sonning qiymati: %d\n", a);
    printf("Pointerdagi manzil: %p\n", pointer);
    printf("Pointer orqali olingan qiymat: %d\n", *pointer);

    *pointer = 15;
    printf("Pointer orqali olingan qiymat: %d\n", a);

    return 0;
}