// VIVEK KUMAR 202419TW021
#include <stdio.h>

int main() {
    int arr[2][];  // Error: Second dimension must be specified.

    printf("Enter values for a 2x3 matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Matrix contents:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
