#include <stdio.h>
int main()
{
    int A, evenCount = 0, oddCount = 0;
    scanf("%d", &A);

    int N[A];

    for (int i = 0; i < A; i++)
    {
        scanf("%d ", &N[i]);
        if (N[i] % 2 == 0)
        {
            evenCount++;
        }
        else
        {
            oddCount++;
        }
    }

    printf("%d %d", evenCount, oddCount);

    return 0;
}