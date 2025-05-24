#include<stdio.h>   

int read(int rows, int cols, int matrix[rows][cols]) {
    printf("Enter elements of the matrix:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

int show(int rows, int cols, int matrix[rows][cols]) {
    printf("The matrix is:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void addMatrix(int rows, int cols, int matrix1[rows][cols], int matrix2[rows][cols], int result[rows][cols]) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

int main() {
    int rows, cols;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    
    int matrix1[rows][cols];
    int matrix2[rows][cols];
    int result[rows][cols];
    
    printf("For first matrix:\n");
    read(rows, cols, matrix1);
    printf("For second matrix:\n");
    read(rows, cols, matrix2);
    
    addMatrix(rows, cols, matrix1, matrix2, result);
    
    printf("First matrix:\n");
    show(rows, cols, matrix1);
    printf("Second matrix:\n");
    show(rows, cols, matrix2);
    printf("Sum of matrices:\n");
    show(rows, cols, result);
    
    return 0;
}