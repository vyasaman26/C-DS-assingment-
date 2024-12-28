#include <stdio.h>

#define MAX 100  


int findMaximum(int arr[], int size) {
    int max = arr[0];  

    
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];  
        }
    }

    return max;
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

    
    int max = findMaximum(arr, size);
    printf("\nThe maximum number in the array is: %d\n", max);

    return 0;
}
