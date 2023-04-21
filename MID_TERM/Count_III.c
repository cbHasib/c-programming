#include <stdio.h>
#include <string.h>
int main()
{
    char S[10001];
    fgets(S, 10001, stdin);

    int len = strlen(S);
    for (int i = 97; i <= 122; i++)
    {
        int count = 0;
        for (int j = 0; j < len; j++)
        {
            if (S[j] == i)
            {
                count++;
            }
        }
        printf("%c - %d\n", i, count);
    }

    return 0;
}