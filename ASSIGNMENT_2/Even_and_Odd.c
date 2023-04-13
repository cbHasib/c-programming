#include <stdio.h>
int main()
{
    int N, sumEven = 0, sumOdd = 0;
    scanf("%d", &N);
    int V[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d ", &V[i]);
        if (V[i] % 2 == 0)
        {
            sumEven += V[i];
        }
        else
        {
            sumOdd += V[i];
        }
    }

    printf("%d %d\n", sumEven, sumOdd);

    return 0;
}