#include <stdio.h>

#define MAX 100  


void countRepeatedNumbers(int arr[], int size) {
    int visited[MAX] = {0};  
    int count;

    for (int i = 0; i < size; i++) {
        if (visited[i] == 1) {  
            continue;
        }

        count = 1;  

        
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
                visited[j] = 1;  
            }
        }

        
        if (count > 1) {
            printf("Number %d is repeated %d times.\n", arr[i], count);
        }
    }
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

    
    countRepeatedNumbers(arr, size);

    return 0;
}
