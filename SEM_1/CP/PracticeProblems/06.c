// Square roots of numbers from 1 to 9
#include<stdio.h>
#include<math.h>

int main(){
    printf("Square root from 1 - 9 are: \n");
    for (int i = 0;i<=9;i++){
        printf("Square of %d = %f\n",i,sqrt(i));
    }

    return 0;
}