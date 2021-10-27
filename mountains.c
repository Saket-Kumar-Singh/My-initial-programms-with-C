#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
void mountain(int a);
int main()
{
    int i, n, b;
    printf("No. of peaks you want");
    scanf("%d", &n);
    printf("OUTPUT:");
    void mountain(n);

    return 0;
}
void mountain(int a)
{
    int n, i;
    int b = 0;
    if (n == 1)
    {
        return;
    }
    mountain(n - 1);
    for (i; i < n; i++)
    {
        if (i > b)
        {
            printf(" ");
        }
        else
            printf("*");
    }
}