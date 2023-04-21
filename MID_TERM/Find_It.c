#include <stdio.h>
int main()
{
    int N, X;
    scanf("%d\n", &N);
    int A[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d ", &A[i]);
    }
    scanf("%d", &X);

    int countSame = 0;
    for (int i = 0; i < N; i++)
    {
        if (A[i] == X)
        {
            countSame++;
        }
    }
    printf("%d", countSame);

    return 0;
}