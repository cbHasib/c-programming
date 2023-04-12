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

    scanf("\n%d", &X);

    int position = -1;

    for (int i = 0; i < N; i++)
    {
        if (X == A[i])
        {
            position = i;
            break;
        }
    }

    printf("%d\n", position);

    return 0;
}