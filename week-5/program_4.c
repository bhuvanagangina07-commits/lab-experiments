#include <stdio.h>

int main()
{
    float a, b;
    int choice;

    printf("Enter two numbers: ");
    scanf("%f%f", &a, &b);

    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Addition = %.2f", a + b);
            break;

        case 2:
            printf("Subtraction = %.2f", a - b);
            break;

        case 3:
            printf("Multiplication = %.2f", a * b);
            break;

        case 4:
            if(b == 0)
                printf("Division by zero is not possible");
            else
                printf("Division = %.2f", a / b);
            break;

        default:
            printf("Invalid option");
    }

    return 0;
}
