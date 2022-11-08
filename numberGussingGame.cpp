#include <cstdio>
#include <cstdlib>
#include <ctime>

int main()
{
    int num, guess, attempts = 1;
    srand(time(0)); // time(0) returns seconds in time
    // The function srand() is used to initialize the generated pseudo random number by rand() function. It does not return anything.
    num = rand() % 100 + 1; // rand() generates random number
    printf("You have to guess the number which lies within the range from 1 to 100\n\n");
    do
    {
        printf("Guess the number\n");
        scanf("%d", &guess);
        if (guess < num)
            printf("Enter higher number please\n");
        else if (guess > num)
            printf("Enter lower number please\n");
        else
            printf("You have guessed the number in %d attempts\n", attempts);
        attempts++;
    } while (guess != num);

    return 0;
}
