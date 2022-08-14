// This is going to be fun!!  We will write a program that generates a random
// number and asks the player to guess it. 
// If the player’s guess is higher than the actual number, the program displays
//  “Lower number please.”
// Similarly, if the user’s guess is too low, the program prints
// “Higher number please.”
// When the user guesses the correct number, the program displays the number
// of guesses the player used to arrive at the number.

// Hints:

// Use loops
// Use a random number generator.


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(int argc, char const *argv[])
{
    int num, total_steps=1, gess;
    srand(time(0));
    num = rand() % 100 + 1; // genrate number

    //printf("the number is %d \n: " ,num );

    do
    {
        printf("Guess a number :\n");
        scanf("%d", &gess);
        if (gess > num)
        {
            printf("lower number please\n");
        }
        else if (gess < num)
        {
            printf("Higher number please\n");
        }

        // else if (gess == num)
        // {
        //     break;
        // }
        total_steps++;
    } while (gess!=num);

    printf("total guess : %d\n", total_steps);

    return 0;
}
