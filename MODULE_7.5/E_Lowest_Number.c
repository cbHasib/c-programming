#include <stdio.h>
int main()
{
    int N, X;
    scanf("%d\n", &N);

    int A[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }

    int lowest = 100000;

    for (int i = 0; i < N; i++)
    {
        if (A[i] <= lowest)
        {
            lowest = A[i];
        }
    }

    for (int i = 0; i < N; i++)
    {
        if (A[i] == lowest)
        {
            printf("%d %d\n", lowest, i + 1);
            break;
        }
    }

    return 0;
}