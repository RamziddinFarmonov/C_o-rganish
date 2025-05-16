/*FAKTORIALNI TOPISH*/

#include <stdio.h>

int faktorial(int a){
    int result = 1;
    for(int i = 1; i <= a; i++){
        result *= i;
    }
    return result;
}
int main() {
    printf("sonni kiriting: ");
    int number1;

    scanf("%d", &number1);
    
    int result = faktorial(number1);

    printf("%d", result);

    return 0;
}


