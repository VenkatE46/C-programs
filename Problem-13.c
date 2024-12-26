#include <stdio.h>
int main()
{
    char filename[100], ch;
    int characters = 0, words = 0, lines = 0;
    FILE *file;
    printf("Enter the filename:");
    scanf("%s", filename);
    file = fopen(filename, "r");
    while ((ch = fgetc(file)) != EOF)
    {
        characters++;

        if (ch == '\n')
        {
            lines++;
        }
        if (ch != ' ' && ch != '\n' && ch != '\t')
        {
            words++;
        }
    }
    fclose(file);
    printf("Number of characters:%d\n", characters);
    printf("Number of lines:%d\n ", lines);
    printf("Number of words:%d\n", words);

    return 0;
}