#include <stdio.h>

#define MAX 100  


void deleteMiddleElement(int arr[], int *size) {
    int stack[MAX];  
    int top = -1;    
    int mid = *size / 2;  

    
    for (int i = 0; i < *size; i++) {
        if (i != mid) {
            stack[++top] = arr[i];  
        }
    }

    
    for (int i = 0; i < *size - 1; i++) {
        arr[i] = stack[top--];  
    }

    
    (*size)--;
}


void printArray(int arr[], int size) {
    printf("Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
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

    
    printf("\nOriginal ");
    printArray(arr, size);

    
    deleteMiddleElement(arr, &size);

    
    printf("Array after deleting the middle element: ");
    printArray(arr, size);

    return 0;
}
