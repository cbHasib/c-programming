#include <stdio.h>
#include <string.h>
int main()
{
    char S[10001], T[1000];
    scanf("%s\n%s", &S, &T);

    int lenS = strlen(S);
    int LenT = strlen(T);

    printf("%d %d\n", lenS, LenT);
    printf("%s %s\n", S, T);

    return 0;
}