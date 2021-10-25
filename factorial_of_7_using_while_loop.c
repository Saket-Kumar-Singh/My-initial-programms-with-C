#include <stdio.h>
#include <math.h>

int main()
{
    int factorial = 1;
    int i = 1;
    int n = 7;
    while (i <= n)
    {
        factorial *= i;
        i++;
    }
    printf("The factorial of %d is %d", n, factorial);
    return 0;
}