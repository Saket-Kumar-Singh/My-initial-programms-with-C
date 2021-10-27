#include <stdio.h>
//#include<math.h>
//#include<stdlib.h>
//#include<time.h>
// void mountain(int a);
int main()
{
    int a, b, c, d, n, i;
    // printf("No. of peaks needed");
    // scanf("%d",&n);
    n = 3;
    a = 1;
    b = 0;
    for (i = n; i > 0; i--)
    {
        while (b <= n)
        {
            while (i > a)
            {
                printf(" ");
                a++;
            }
            while (a >= i)
            {
                printf("*");
                if (a == n)
                {
                    break;
                }
                a++;
            }
            b++;
            a = 0;
        }

        printf("\n");
        b = 0;
    }
    // mountain(n);

    return 0;
}
// void mountain(int a)
// {
//     int n, i;
//     if (n == 1)
//     {
//         return;
//     }
//     mountain(n - 1);
//     for (i = 0; i < n; i++)
//     {
//         printf(" ");
//     }
//     printf("*");
// }