#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n;
    int a = 0;
    printf("No. of lines of stars needed\n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        /* code */

        for (int i = 0; i <= n; i++)
        {
            while (i > a)
            {
                printf("* ");
                a++;
            }
            // if (i >= 1)
            //{
            printf("\n");
            // }
            // while (a >= 1)
            // {
            //     a--;
            // }
            a = 0;
        }
        for (int i = n - 1; i > 0; i--)
        {
            while (i > a)
            {
                printf("* ");
                a++;
            }
            printf("\n");
            a = 0;
        }
    }
    return 0;
}
