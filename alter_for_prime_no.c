#include <stdio.h>
#include <math.h>
//this is not the best methord to find a prime number
int main()
{
    int i = 2;
    int n;
    int prime = 1;
    printf("Give the positive integer\n");
    scanf("%d", &n);
    if (n > 2)
    {
        for (i; i < n; i++)
        {
            if (n % i == 0)
            {
                prime = 1;
                break;
            }
        }
        if (prime = 0)
        {
            printf("%d is prime");
        }
        else
            printf("%d is not prime", n);
        if (n == 2)
        {
            printf(" 2 is prime");
        }
        else if (n == 1)
        {
            printf("1 is neither prime nor composite");
        }
        else if (n <= 0)
        {
            printf("Please enter positive integer");
        }

        return 0;
    }
}