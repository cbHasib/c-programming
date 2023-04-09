#include <stdio.h>
int main()
{
    int N, max = 0, input;
    scanf("%d", &N);
    for (int i = 1; i <= N; i++)
    {
        scanf("%d", &input);
        if (max < input)
        {
            max = input;
        }
    }

    printf("%d", max);

    return 0;
}