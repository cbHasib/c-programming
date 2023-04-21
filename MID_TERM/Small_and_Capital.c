#include <stdio.h>
#include <string.h>

int main()
{
    char S[1001];
    fgets(S, 1001, stdin);
    int size = strlen(S);

    int smallCount = 0, capitalCount = 0;
    for (int i = 0; i < size; i++)
    {
        if (S[i] >= 'a' && S[i] <= 'z')
        {
            smallCount++;
        }
        else if (S[i] >= 'A' && S[i] <= 'Z')
        {
            capitalCount++;
        }
    }

    printf("%d %d", capitalCount, smallCount);
    return 0;
}