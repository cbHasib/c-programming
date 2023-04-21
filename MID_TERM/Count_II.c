#include <stdio.h>
#include <string.h>
int main()
{
    char S[1001];
    fgets(S, 1001, stdin);
    int size = strlen(S);

    int vowelCount = 0;

    for (int i = 0; i < size; i++)
    {
        if (S[i] == 'a' || S[i] == 'e' || S[i] == 'i' || S[i] == 'o' || S[i] == 'u')
        {
            vowelCount++;
        }
    }

    printf("%d", vowelCount);
    return 0;
}