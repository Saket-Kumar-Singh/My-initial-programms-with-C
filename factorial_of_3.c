#include <stdio.h>
#include <math.h>

int main()
{
    int factorial = 1;
    int i = 1;
    for (i; i <= 3; i++)
    {
        factorial *= i; /* code */
    }
    printf("the factorial of 3 is %d", factorial);
    return 0;
}