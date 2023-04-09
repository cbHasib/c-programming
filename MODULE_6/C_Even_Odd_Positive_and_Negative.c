#include <stdio.h>
int main()
{
    int N, oddCount = 0, evenCount = 0, posCount = 0, negCount = 0, num;
    scanf("%d", &N);

    for (int i = 1; i <= N; i++)
    {
        scanf("%d", &num);
        if (num > 0)
        {
            posCount++;
        }
        else if (num < 0)
        {
            negCount++;
        }

        if (num % 2 == 0)
        {
            evenCount++;
        }
        else
        {
            oddCount++;
        }
    }

    printf("Even: %d\n", evenCount);
    printf("Odd: %d\n", oddCount);
    printf("Positive: %d\n", posCount);
    printf("Negative: %d\n", negCount);

    return 0;
}