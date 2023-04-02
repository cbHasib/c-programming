#include <stdio.h>
int main()
{
    int tk;
    scanf("%d", &tk);

    if (tk > 5000)
    {
        printf("We will visit Cox's Bazar\n");

        if ((tk > 10000))
        {
            printf("We will also visit Saintmartin");
        }
        else
        {
            printf("Back to home");
        }
    }
    else
    {
        printf("trip cancel");
    }

    return 0;
}