#include <stdio.h>
int main()
{
    char a;
    scanf("%c", &a);

    // if (a >= 97 && a <= 122)
    if (a >= 'a' && a <= 'z')
    {
        int ans = a - 32;
        printf("%c\n", ans);
    }
    else
    {
        int ans = a + 32;
        printf("%c\n", ans);
    }

    return 0;
}