#include <stdio.h>
int main()
{
    int n, input;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &input);
        do
        {
            printf("%d ", input % 10);
            input = input / 10;
        } while (input != 0);
        printf("\n");
    }

    return 0;
}