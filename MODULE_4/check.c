#include <stdio.h>
int main()
{
    // Given two numbers A and B. Print "Yes" if A is greater than or equal to B. Otherwise print "No".

    int A, B;
    scanf("%d %d", &A, &B);
    if (A >= B)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }

    return 0;
}