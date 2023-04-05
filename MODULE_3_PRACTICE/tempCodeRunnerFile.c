#include <stdio.h>
int main()
{
    int N;
    
    scanf("%d\n", &N);
   
    for (int i = 1; i <= N; i++)
    {
        if (i%5 == 0)
        {
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
        
    }
    

    return 0;
}