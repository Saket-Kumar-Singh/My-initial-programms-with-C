#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int sum(int a);

int main()
{
    int n;
    printf("Give the number\n");
    scanf("%d", &n);

    printf("The sum of first %d numbers is %d", n, sum(n));
    return 0;
}
int sum(int a)
{
    if (a == 0 || a == 1)
    {
        return a;
    }
    else
    {
        return a + sum(a - 1);
    }
}