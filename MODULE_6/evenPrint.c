#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);

    int evenCount = 0;

    for (int i = 1; i <= N; i++)
    {
        if (i % 2 == 0)
        {
            evenCount++;
            printf("%d\n", i);
        }
    }

    if (evenCount == 0)
    {
        printf("-1");
    }

    return 0;
}