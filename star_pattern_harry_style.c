#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
void printpattern(int n);
/* for n=3 pattern
 *
 * * *
 * * * * * */
int main()
{
    int n = 3;
    printpattern(n);
    return 0;
}
void printpattern(int n)
{
    int i;
    if (n == 1)
    {
        printf("*\n");
        return;
    }
    printpattern(n - 1);
    for (i = 0; i < 2 * (n - 1) + 1; i++)
    {
        printf("*");
    }
    printf("\n");
}
