#include <stdio.h>
//#include<math.h>
//#include<stdlib.h>
//#include<time.h>
//void mountain();
int main()
{
    int a, b, c, d, i, n;
    // printf("How mangy mountain peaks you want\n");
    // scanf("%d", &n);
    n = 3;
    b = 1;
    a = b;
    i = 0;
    c = 0;
    d = 0;
    for (b; b < n; b++)
    {
        while (c < n)
        {
            a = b;
            while (a < n)
            {
                printf(" ");
                a++;
            }
            while (d < (2 * b) - 1)
            {
                if (a == n)
                {
                    printf("*");
                }
                d++;
            }
            while (a > 0)
            {
                printf(" ");
                a--;
            }
            c++;
            d = 0;
        }
        printf("\n");
        c = 0;
    }
    return 0;
}