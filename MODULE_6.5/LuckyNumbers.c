#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);

    int lastDigit = x % 10;
    int firstDigit = x / 10;

    if (lastDigit % firstDigit == 0 || firstDigit % lastDigit == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}