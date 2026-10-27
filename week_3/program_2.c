#include <stdio.h>
#include <math.h>

int main()
{
    float p, r, t, ci, amount;

    printf("Enter principal amount: ");
    scanf("%f", &p);

    printf("Enter rate of interest: ");
    scanf("%f", &r);

    printf("Enter time period: ");
    scanf("%f", &t);

    amount = p * pow((1 + r / 100), t);

    ci = amount - p;

    printf("Compound Interest = %.2f", ci);

    return 0;
}
