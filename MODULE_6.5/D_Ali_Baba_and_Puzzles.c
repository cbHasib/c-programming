#include <stdio.h>
int main()
{
    int a, b, c;
    long long int d;

    scanf("%d %d %d %lld", &a, &b, &c, &d);

    long long int plusMinus = a + b - c;
    long long int plusMult = a + b * c;
    long long int plusMult2 = a + b * c;
    long long int minusPlus = a - b + c;
    long long int minusMult = a - b * c;
    long long int minusMult2 = a - b * c;
    long long int multPlus = a * b + c;
    long long int multPlus2 = a * b + c;
    long long int multMinus = a * b - c;
    long long int multMinus2 = a * b - c;

    if (plusMinus == d)
    {
        printf("YES\n");
    }
    else if (plusMult == d || plusMult2 == d)
    {
        printf("YES\n");
    }

    else if (minusPlus == d)
    {
        printf("YES\n");
    }
    else if (minusMult == d || minusMult2 == d)
    {
        printf("YES\n");
    }

    else if (multPlus == d || multPlus2 == d)
    {
        printf("YES\n");
    }
    else if (multMinus == d || multMinus2 == d)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}