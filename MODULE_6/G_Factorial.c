#include <stdio.h>
int main()
{
    int N, input;

    scanf("%d", &N);
    for (int i = 1; i <= N; i++)
    {
        scanf("%d\n", &input);
        int fact = 1;

        if (input == 0)
        {
            printf("%d\n", fact);
            continue;
        }

        for (int j = 1; j <= input; j++)
        {
            fact = fact * j;
        }
        printf("%d\n", fact);
    }

    return 0;
}