#include <stdio.h>
int main()
{
    int i;
    int n;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d-even\n", i);
        }
        else
        {
            printf("%d-odd\n", i);
        }
    }
}