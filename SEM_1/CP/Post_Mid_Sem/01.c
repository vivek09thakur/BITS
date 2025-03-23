// array in c
#include<stdio.h>

int main(){
    // initialising sum to 0
    int sum = 0;
    // initialising array of size 5
    int arr[5];
    // taking input from user
    for(int i = 0; i < 5; i++){
        scanf("%d", &arr[i]);
    }
    // display the sum of the elements of the array
    for(int i = 0; i < 5; i++){
        sum += arr[i];
    }
    printf("Sum of the elements of the array is: %d\n", sum);
    return 0;
}