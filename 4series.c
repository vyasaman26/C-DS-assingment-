#include <stdio.h>

double calculateSeriesSum(int n) {
    double sum = 0.0;
    for (int i = 1; i <= n; i++) {
        sum= sum +(i * (i - 1));
    }
    return sum +1; 
}

int main() {
    int n;
    
    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer for n.\n");
        return 1;
    }

    double result = calculateSeriesSum(n);
    printf("The sum of the series up to %d terms is: %.2f\n", n, result);

    return 0;
}
