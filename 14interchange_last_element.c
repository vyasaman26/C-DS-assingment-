#include <stdio.h>

int main()
{
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < size - 1; i++)
    {

        int temp = arr[i];
        arr[i] = arr[size - 1];
        arr[size - 1] = temp;
    }

    printf("\nArray after interchanging elements with the last element:\n");
    for (int i = 0; i < size; i++)
    {
        printf("Element %d: %d\n", i + 1, arr[i]);
    }

    return 0;
}
