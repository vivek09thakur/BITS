// VIVEK KUMAR 202419TW021
#include <stdio.h>
#include <string.h>

int count_words(const char *str);

int main()
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    int word_count = count_words(str);
    printf("Number of words = %d\n", word_count);

    return 0;
}

int count_words(const char *str)
{
    int count = 0, in_word = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ' && str[i] != '\t')
        {
            if (!in_word)
            {
                count++;
                in_word = 1;
            }
        }
        else
        {
            in_word = 0;
        }
    }

    return count;
}
