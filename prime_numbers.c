#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    int i = 2;
    printf("Give the Positive integer\n");
    scanf("%d", &n);
    if (n > 2)
    {
        for (i; i < n; i++)
        {
            if (n % i == 0)
            {
                printf("%d is not prime", n);
                break;
            }
            else if (n % i != 0)
            {

                printf("%d is prime", n);
                break;
            }
        }
    }

    if (n == 2)
    {
        printf("2 is prime");
    }
    else if (n == 1)
    {
        printf("1 is neither prime nor composite");
    }
    else if (n <= 0)
    {
        printf("Please a positive integer");
    }

    return 0;
}