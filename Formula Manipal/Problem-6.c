#include <stdio.h>
#include <string.h>
int main()
{
    char vowels[] = "aeiouAEIOU";
    char input[100];
    int vowelCount = 0, consonantCount = 0;
    printf("Enter a word: ");
    scanf("%s", input);
    for (int i = 0; i < strlen(input); i++)
    {
        char ch = input[i];

        if (strchr(vowels, ch))
        {
            vowelCount++;
        }
        else
        {
            consonantCount++;
        }
    }
    printf("Number of vowels: %d\n", vowelCount);
    printf("Number of consonants: %d\n", consonantCount);

    return 0;
}