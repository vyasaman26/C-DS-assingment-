#include <stdio.h>


float calculateAverage(int arr[], int size) {
    int sum = 0;  
    
    
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    
    
    return (float)sum / size;
}

int main() {
    int arr[10];  
    int size = 10;  
    
    
    printf("Enter 10 numbers:\n");
    for (int i = 0; i < size; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    
    float average = calculateAverage(arr, size);
    
    
    printf("\nThe average of the array is: %.2f\n", average);

    return 0;
}
