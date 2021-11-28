#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
float convert(float a);
int main()
{
    float temp;
    printf("Gine the tempraturee in *C\n");
    scanf("%f", &temp);
    printf("The temp in *F is %f", convert(temp));
    return 0;
}
float convert(float a)
{
    float d = (a * 9 / 5) + 32;
    return d;
}
