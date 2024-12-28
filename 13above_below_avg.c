#include <stdio.h>


float calculateAverage(int arr[], int size) {
    int sum = 0;  
    int i = 0;

    
    while (i < size) {
        sum += arr[i];
        i++;
    }

    
    return (float)sum / size;
}

int main() {
    int size;
    int aboveCount = 0, belowCount = 0;

    
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];  

    
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    
    float average = calculateAverage(arr, size);

    
    for (int i = 0; i < size; i++) {
        if (arr[i] > average) {
            aboveCount++;  
        } else if (arr[i] < average) {
            belowCount++;  
        }
    }

    
    printf("\nAverage of the array: %.2f\n", average);
    printf("Number of elements above the average: %d\n", aboveCount);
    printf("Number of elements below the average: %d\n", belowCount);

    return 0;
}
