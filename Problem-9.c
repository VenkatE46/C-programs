#include <stdio.h>

int main()
{
    int matrix[4][4];
    int sum = 0, diagonal1 = 0, diagonal2 = 0;

    printf("Enter the elements of the 4x4 matrix:\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nThe 4x4 matrix is:");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d", matrix[i][j]);
            sum += matrix[i][j];

            if (i == j)
            {
                diagonal1 += matrix[i][j];
            }
            if (i + j == 3)
            {
                diagonal2 += matrix[i][j];
            }
        }
        printf("\n");
    }

    printf("\nSum of all elements: %d\n", sum);
    printf("Sum of primary diagonal: %d\n", diagonal1);
    printf("Sum of secondary diagonal: %d\n", diagonal2);

    return 0;
}
