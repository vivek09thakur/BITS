// NAME: VIVEK KUMAR
// ID : 202419TW021
#include <stdio.h>

void printChar(int n, char ch){
    if (n == 0){
        return;
    }
    printf("%c ", ch);
    printChar(n-1, ch);
}
    
int main(){
    int n = 4;
    char ch;

    ch = 'C';

    // for (int i = 0; i < n; i++){
    //         printf("%c ", ch);
    // }

    // while (n)
    // {
    //     printf("%c ", ch);
    //     n--;
    // }

    printChar(n, ch);
    

    return 0;
}