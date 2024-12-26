#include <stdio.h>
#include <string.h>

int main()
{
    int attempts, maxAttempts = 3;
    char password[] = "password";
    char input[100];
    attempts = 0;
    while (attempts < maxAttempts)
    {
        printf("Enter the password: ");
        scanf("%s", input);
        if (strcmp(input, password) == 0)
        {
            printf("welcome");
            // break;
            return 0;
        }
        else
        {
            attempts++;
            if (attempts < maxAttempts)
            {
                printf("Wrong password.Retry\n\n");
            }
        }
    }
    printf("\nToo many failed attempts,Access denied");
    return 0;
}