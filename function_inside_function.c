#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
void goodmorning();
void evening();
void night();
int main()
{
    morning();
    return 0;
}
void morning()
{
    printf("good morning\n");
    evening();
}
void evening()
{
    printf("Good evening\n");
    night();
}
void night()
{
    printf("Good Night\n");
}