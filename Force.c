#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
float force(float a);

int main()
{
    float mass;
    printf("Give The mass in Kg\n");
    scanf("%f", &mass);
    printf("Weight is %.3f",force(mass));// this givesthree decimal points.
    return 0;
}
float force(float a)
{
    float d = a * 9.80;
    return d;
}