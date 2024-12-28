#include <stdio.h>

void countPositiveNegative(int arr[], int size, int *positiveCount, int *negativeCount)
{
    *positiveCount = 0;
    *negativeCount = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > 0)
        {
            (*positiveCount)++;
        }
        else if (arr[i] < 0)
        {
            (*negativeCount)++;
        }
    }
}

int main()
{
    int arr[10];
    int positiveCount = 0, negativeCount = 0;

    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    countPositiveNegative(arr, 10, &positiveCount, &negativeCount);

    printf("\nPositive numbers count: %d\n", positiveCount);
    printf("Negative numbers count: %d\n", negativeCount);

    return 0;
}
