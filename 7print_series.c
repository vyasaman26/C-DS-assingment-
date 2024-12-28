#include <stdio.h>

void printSeries(int n) {
    for (int i = 0; i < n; i++) {
        if (i != 0) {
            printf(", "); 
        }
        printf("1/%d", (2 * i + 1)); 
    }
    printf("\n");
}

int main() {
    int n;

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer for n.\n");
        return 1;
    }

    printf("The series up to %d terms is:\n", n);
    printSeries(n);

    return 0;
}
