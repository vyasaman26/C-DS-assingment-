#include <stdio.h>

int main()
{
    int n;

    printf("Enter the size of the matrix (n x n): ");
    scanf("%d", &n);

    int matrix[10][10];

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("The matrix is:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("Primary diagonal elements: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", matrix[i][i]);
    }

    printf("\n");
    return 0;
}
