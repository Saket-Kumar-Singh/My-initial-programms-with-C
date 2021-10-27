#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n,b;
    int a = 0;
    printf("No. of lines of stars needed\n");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        while (i > a)
        {
            for (b = 1; b <= i; b++)
            {
                printf("%d",b);
                a++;
            }
        }
        if (i >= 1)
        {
            printf("\n");
        }
        // while (a >= 1)
        // {
        //     a--;
        // }
        a = 0;
    }

    return 0;
}