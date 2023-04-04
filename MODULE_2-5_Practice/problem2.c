/* You need to take two integer values as input and show the summation, subtraction, multiplication and division in the given format below.
 */

#include <stdio.h>
int main()
{
    int sum, sub, mult;
    float a, b, div;
    scanf("%f %f", &a, &b);
    sum = a + b;
    sub = a - b;
    mult = a * b;
    div = a / b;

    printf("%0.0f + %0.0f = %d\n", a, b, sum);
    printf("%0.0f - %0.0f = %d\n", a, b, sub);
    printf("%0.0f * %0.0f = %d\n", a, b, mult);
    printf("%0.0f / %0.0f = %0.2f\n", a, b, div);

    return 0;
}