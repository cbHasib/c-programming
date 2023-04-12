#include <stdio.h>
int main()
{
    int N, sum = 0;
    scanf("%d", &N);

    int A[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
        sum += A[i];
    }

    if (sum < 0)
    {
        sum = sum * (-1);
    }
    printf("%d\n", sum);

    return 0;
}