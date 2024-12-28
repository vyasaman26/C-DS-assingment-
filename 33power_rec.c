#include <stdio.h>

int power(int base, int exponent)
{
    if (exponent == 0)
    {
        return 1;
    }
    else
    {
        return base * power(base, exponent - 1);
    }
}

int main()
{
    int base, exponent;

    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exponent);

    int result = power(base, exponent);

    printf("%d raised to the power %d is %d\n", base, exponent, result);

    return 0;
}
