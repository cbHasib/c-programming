#include <stdio.h>
#include <string.h>

int main()
{
    int N, K;
    scanf("%d %d", &N, &K);

    for (int i = 1; i <= K; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}