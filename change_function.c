#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
int change(int b);

int main()
{
    int b = 22;
    change(b);
    printf("the value of b is %d", b);
    return 0;
}
int change(int b)
{
    b = 77;
    return b;
}