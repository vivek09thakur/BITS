//  VIVEK KUMAR 202419TW021
#include<stdio.h>
main() {
    /* Declaration and Initialization statement here */
    int i, j;
//    int arr[2][3]; // Statement 1
//    int arr[2][3] = {1,2,3,4,5,6}; // Statement 2
//    int arr[2][3] = {}; // Statement 3
//    int arr[2][3] = {1 2 3 4 5 6}; // Statement 4
//    int arr[2][3] = {1, 2, 3}; // Statement 5
//    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}}; // Statement 6
//    int arr[2][3] = {{1, 2}, {4, 5, 6}}; // Statement 7
//    int arr[][3] = {1,2,3,4,5,6}; // Statement 8
//    int arr[2][] = {1,2,3,4,5,6}; // Statement 9
    int arr[][] = {1,2,3,4,5,6}; // Statement 10
    printf("The array contents are:\n");
    for (i = 0; i < 2; i++) {
        printf("\nThe contents of row%d : ", i);
        for (j = 0; j < 3; j++)
            printf("%d ", arr[i][j]);
    }
}
