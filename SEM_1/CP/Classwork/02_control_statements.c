#include <stdio.h>
#include <string.h>

int main() {
    char answer[10]; 
    int valid = 0;

    while (!valid) {
        printf("Do you love me? (yes/yes): ");
        scanf("%9s", answer);

        if (strcmp(answer, "yes") == 0) {
            valid = 1;
        } else {
            printf("You can only say yes <3\n");
        }
    }

    printf("I love you too!");
    return 0;
}