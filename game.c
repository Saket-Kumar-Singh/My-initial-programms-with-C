#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess, attempts = 1;
    srand(time(0));
    number = rand() % 100 + 1;
    printf("the number is %d\n", number);
    do
    {
        printf("Guess a no. between 1 to 100\n");

        scanf("%d", &guess);

        if (guess > number)
        {
            printf("Lower number please\n");
        }
        else if (guess < number)
        {
            printf("Lower number please\n");
        }
        else
            printf("You guessed in %d attempts", attempts);
        attempts++;
    } while (guess != number);

    return 0;
}