// VIVEK KUMAR 202419TW021
#include<stdio.h>
int main()
{
    int arr[2][3]= {1,2,3,4,5,6};
    int i, j;

    printf ("The address of array elements are:\n");
    for (i = 0; i < 2; i++)
    {
        printf("\n The address of row%d : ",i);
        for (j = 0; j < 3; j++)
            printf("%d  ", &arr[i][j]);
    }
}
