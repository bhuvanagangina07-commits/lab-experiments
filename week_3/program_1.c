#include <stdio.h>
#include <math.h>

int main()
{
    float num, result;

    printf("Enter a number: ");
    scanf("%f", &num);

    if (num < 0)
    {
        printf("Square root of a negative number is not real");
    }
    else
    {
        result = sqrt(num);
        printf("Square root = %.2f", result);
    }

    return 0;
}
