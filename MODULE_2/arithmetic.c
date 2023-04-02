#include <stdio.h>
int main()
{
    int a = 3, b = 20;
    int sum = a + b;
    int minus = a - b;
    int mlt = a * b;
    int dvd = b / a;
    float dvdF = a / b;
    int mod = a % b;

    printf("%d", mod);

    return 0;
}