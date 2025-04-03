// VIVEK 202419TW021
#include <stdio.h>

int main() {
    int rowa, cola, rowb, colb;

    printf("Enter rows and columns for Matrix A: ");
    scanf("%d %d", &rowa, &cola);

    printf("Enter rows and columns for Matrix B: ");
    scanf("%d %d", &rowb, &colb);

    if (cola != rowb) {
        printf("Incorrect matrix dimensions. Multiplication not possible.\n");
        return 0;
    }

    int a[rowa][cola], b[rowb][colb], c[rowa][colb];

    printf("Enter elements for Matrix A:\n");
    for (int i = 0; i < rowa; i++) {
        for (int j = 0; j < cola; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements for Matrix B:\n");
    for (int i = 0; i < rowb; i++) {
        for (int j = 0; j < colb; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    for (int i = 0; i < rowa; i++) {
        for (int j = 0; j < colb; j++) {
            c[i][j] = 0;
            for (int k = 0; k < cola; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("Resultant Matrix after Multiplication:\n");
    for (int i = 0; i < rowa; i++) {
        for (int j = 0; j < colb; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
