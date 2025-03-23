#include<stdio.h>

int main(){
    int big,arr[5];
    printf("Enter the elements of the array: ");
    for(int i = 0; i < 5; i++){
        scanf("%d", &arr[i]);
    }
    big = arr[0];
    for(int i = 0; i < 5; i++){
        if(arr[i] > big){
            big = arr[i];
        }
    }
    printf("The biggest element of the array is: %d\n", big);

    return 0;
}