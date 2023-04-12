#include <stdio.h>
int main()
{
    char x;
    scanf("%c", &x);
    if (x == 'z')
    {
        printf("a\n");
    }
    else
    {
        int nextLetter = x + 1;
        printf("%c", nextLetter);
    }

    return 0;
}