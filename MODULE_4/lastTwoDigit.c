#include <stdio.h>
int main()
{
    int A, B, C, D;
    scanf("%d %d %d %d", &A, &B, &C, &D);
    float mult = A * B * C * D;

    printf("%f %f\n", mult / 100, mult);

    return 0;
}