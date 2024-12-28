#include <stdio.h>

#define MAX 100  


int findMinimum(int arr[], int size) {
    int min = arr[0];  

    
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];  
        }
    }

    return min;
}

int main() {
    int arr[MAX];
    int size;

    
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    
    int min = findMinimum(arr, size);
    printf("\nThe minimum number in the array is: %d\n", min);

    return 0;
}
