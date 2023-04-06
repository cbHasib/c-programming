#include <stdio.h>
int main()
{
    int money;
    scanf("%d", &money);

    if (money > 1000)
    {
        printf("I will buy Punjabi\n");

        int leftMoney = money - 1000;
        if (leftMoney >= 500)
        {
            printf("I will buy new shoes\n");
            printf("Alisa will buy new shoes\n");
        }
    }
    else
    {
        printf("Bad luck!\n");
    }

    return 0;
}