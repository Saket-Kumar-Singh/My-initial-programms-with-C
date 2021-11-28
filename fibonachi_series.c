#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
int series(int a);
int main()
{
    int n;
    printf("Give the term that has to be calculated in a fibonachi series\n");
    scanf("%d", &n);
    int term = series(n-1);
    printf("The %dth term of fibonacci series is %d\n", n, term);
    return 0;
}
int series(int a)
{
    if (a == 1 || a == 0)
    {
        return a;
    }
    else
    {
        return series(a - 1) + series(a-2);
    }
}