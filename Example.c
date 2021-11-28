#include <stdio.h>
//#include<math.h>
//#include<stdlib.h>
//#include<string.h>
//#include<time.h>
int change(int *ptr)
{
    *ptr = 3;
    return *ptr;
}
int main()
{
    int a = 7;
    change(&a);
    printf("%d", a);
    return 0;
}