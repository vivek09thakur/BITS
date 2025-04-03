// VIVEK KUMAR 202419TW021
#include <stdio.h>

int main() {
    int rowa, cola, rowb, colb;

    printf("Enter rows and columns for Matrix A: ");
    scanf("%d %d", &rowa, &cola);

    printf("Enter rows and columns for Matrix B: ");
    scanf("%d %d", &rowb, &colb);

    if (rowa != rowb || cola != colb) {
        printf("Incorrect matrix dimensions. Addition not possible.\n");
        return 0;
    }

    int a[rowa][cola], b[rowb][colb], c[rowa][cola];

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
        for (int j = 0; j < cola; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("Resultant Matrix after Addition:\n");
    for (int i = 0; i < rowa; i++) {
        for (int j = 0; j < cola; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
