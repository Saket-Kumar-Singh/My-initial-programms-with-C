#include <stdio.h>
//#include<math.h>
//#include<stdlib.h>
//#include<time.h>
void swap(int *a, int *b);
void wrong_swap(int a, int b);
int main()
{
    int a = 3;
    int b = 4;

    printf("The value of a and b is %d and %d \n", a, b);
    wrong_swap(a, b); // will not work due to call by value
    swap(&a, &b);     // will work due to call by refrence
    printf("The value of a and b is %d and %d \n", a, b);
    return 0;
}
void wrong_swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}