#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
float average(float a, float b, float c);
int main()
{
    float a, b, c;
    printf("Give the First number\n");
    scanf("%f", &a);
    printf("Give the Second number\n");
    scanf("%f", &b);
    printf("Give the Third number\n");
    scanf("%f", &c);
    printf("The average of %f, %f , %f is %f", a, b, c, average(a, b, c));
    return 0;
    // Sarvagy is smart
}
float average(float a, float b, float c)
{
    float d = (a + b + c) / 3;
    return d;
}