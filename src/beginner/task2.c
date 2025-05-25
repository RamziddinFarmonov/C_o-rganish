#include <stdio.h>

void elementlarni_ikki_barobar(int *arr, int n){
    for(int i = 0; i < n; i++){
        *(arr + i) = *(arr + i) * 2;
    }
}

int main(){
   
    int arr[] = {1, 2, 3, 4, 5};
    int a = 5;

    elementlarni_ikki_barobar(arr, a);

    for(int i = 0; i < a; i ++){
        printf("%d \n", arr[i]);
    }

    return 0;
}