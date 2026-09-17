#include <stdio.h>

int main(void)
{
    float a;
    float b;
    float result;

    printf("Enter numerator : ");
    scanf("%f", &a);

    printf("Enter denominator : ");
    scanf("%f", &b);

    result = a / b;

    printf("The result is %f\n", result);

        return 0;
}
