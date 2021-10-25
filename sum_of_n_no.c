#include <stdio.h>
#include <math.h>

int main()
{
    int i = 0;
    int n = 10;
    int sum = 0;
    for (i = 0; i <= n; i++)
    {
        sum += i;
    }
    printf("value %d", sum);
    return 0;
}