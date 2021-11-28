#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int sum(int a, int b);

int main()
{
    int c;
    c = sum(2, 16);
    printf("The value of c is %d",c);
    return 0;
}
int sum(int a, int b)
{
    int result;
    result = a + b;
    return result;
}