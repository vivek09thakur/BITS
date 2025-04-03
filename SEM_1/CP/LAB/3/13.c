// VIVEK KUMAR 202419TW021
#include <stdio.h>

int main() {
    int size, iden = 1;

    printf("Enter the size of the square matrix: ");
    scanf("%d", &size);

    int matrix[size][size];

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("The entered matrix is:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d ", matrix[i][j]);
            if ((i == j && matrix[i][j] != 1) || (i != j && matrix[i][j] != 0)) {
                iden = 0;
            }
        }
        printf("\n");
    }

    if (iden) {
        printf("The given matrix is an Identity Matrix.\n");
    } else {
        printf("The given matrix is NOT an Identity Matrix.\n");
    }

    return 0;
}
