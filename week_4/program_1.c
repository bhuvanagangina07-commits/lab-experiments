#include <stdio.h>

int main()
{
    int A, B, C, D, E, F, G;
    int i, J;

    printf("Enter values of A, B, C, D, E, F, G: ");
    scanf("%d%d%d%d%d%d%d",
          &A, &B, &C, &D, &E, &F, &G);

    printf("a = %d\n", A+B*C+(D*E)+F*G);

    if (B != 0)
        printf("b = %d\n", A/B*C-B+A*D/3);
    else
        printf("b is undefined
