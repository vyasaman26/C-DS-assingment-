#include <stdio.h>

double calculateSeriesSum(int N) {
    double sum = 0.0;
    int sign = 1; 
    for (int i = 0; i < N; i++) {
        sum += sign * (1.0 / (2 * i + 1));
        sign = -sign; 
    }
    return sum;
}

int main() {
    int N;

    printf("Enter the number of terms (N): ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("Please enter a positive integer for N.\n");
        return 1;
    }

    double result = calculateSeriesSum(N);
    printf("The sum of the series up to %d terms is: %.6f\n", N, result);

    return 0;
}
