#include <stdio.h>
int main()
{
    float a;
    scanf("%f", &a);
    int b = a;
    if (a / b == 1)
    {
        printf("int %0.0f\n", a);
    }
    else
    {
        float x = a - b;
        printf("float %d %0.3f\n", b, x);
    }

    return 0;
}