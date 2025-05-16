#include <stdio.h>

int main() {
    int son = 10;
    int *pointer = &son;

    
    printf("Sonning qiymati: %d\n", son);
    printf("Pointerdagi manzil: %p\n", pointer);
    printf("Pointer orqali olingan qiymat: %d\n", *pointer);
    return 0;
}
