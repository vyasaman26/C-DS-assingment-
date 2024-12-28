#include <stdio.h>
#include <math.h>

float f1(float principal, float rate, float time)
{
    return (principal * rate * time) / 100;
}

float f2(float principal, float rate, float time)
{
    return principal * (pow(1 + rate / 100, time)) - principal;
}

void f3(float (*si_func)(float, float, float), float (*ci_func)(float, float, float), float principal, float rate, float time)
{
    float si = si_func(principal, rate, time);
    float ci = ci_func(principal, rate, time);
    float difference = ci - si;

    printf("Simple Interest: %.2f\n", si);
    printf("Compound Interest: %.2f\n", ci);
    printf("Difference between Compound Interest and Simple Interest: %.2f\n", difference);
}

int main()
{
    float principal, rate, time;

    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the rate of interest: ");
    scanf("%f", &rate);

    printf("Enter the time period in years: ");
    scanf("%f", &time);

    f3(f1, f2, principal, rate, time);

    return 0;
}
