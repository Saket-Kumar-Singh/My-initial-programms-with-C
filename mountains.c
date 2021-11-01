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
    a = b;
    b = 1;
    i = 0;
    c = 0;
    d = 0;
    for (b; b < n; b++)
    {
        while (c < n)
        {
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
            }
            while (a > 0)
            {
                printf(" ");
                a--;
            }
            c++;
        }
        printf("\n");
    }
    return 0;
}
