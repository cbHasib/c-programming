#include <stdio.h>
int main()
{
    int tk;
    scanf("%d", &tk);
    if (tk >= 100)
    {
        printf("We will eat pizza");
    }
    else if (tk >= 50)
    {
        printf("We will eat Fuchka");
    }
    else if (tk >= 20)
    {
        printf("We will eat Biscuit");
    }
    else
    {
        printf("We will eat nothing");
    }
}