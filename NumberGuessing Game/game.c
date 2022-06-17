#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int number, guess, n_gueses = 1;
    srand(time(0));
    number = rand() % 100 + 1; // Generate a random number between 1 and 100
    // printf("The number is %d", number);
    // keep running the loop untill the number is guessed
    do
    {
        printf("Guess the number between 1 to 100: ");
        scanf("%d", &guess);
        if (guess > number)
        {
            printf("Lower number please!\n");
        }
        else if (guess < number)
        {
            printf("Higher number please!\n");
        }
        else
        {
            printf("You have guessed in %d attempts.\n", n_gueses);
        }
        n_gueses++;
    } while (guess != number);
getch();
return 0;
}