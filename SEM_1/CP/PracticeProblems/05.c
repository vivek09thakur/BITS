// Sum of first n even numbers
#include <stdio.h>

int main(){
    int n,i,total=0;
    printf("Enter the value of n = ");
    scanf("%d",&n);

    for(i=0;i<=n;i++){
        total=total+ (2*i);
    }
    printf("Sum of first %d even numbers = %d",n,total);

    return 0;
}
    