#include <stdio.h>
#include<stdlib.h>

double power(double y, int x) {
    double result = 1.0;
    for (int i = 0; i < abs(x); i++) {
        result *= y; 
    }

    if (x < 0) {
        result = 1.0 / result;
    }

    return result;
}

int main() {
    double y;
    int x;

    printf("Enter the base (y): ");
    scanf("%lf", &y);

    printf("Enter the exponent (x): ");
    scanf("%d", &x);

    double result = power(y, x);
    printf("%.2lf raised to the power %d is: %.2lf\n", y, x, result);

    return 0;
}
