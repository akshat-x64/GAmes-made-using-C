#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int calsum(char human, char computer)
{
    if (human == computer)
    {
        return 0;
    }
    if (human == 'r' && computer == 's')
    {
        return 1;
    }
    else if (computer == 'r' && human == 's')
    {
        return -1;
    }
    if (human == 'p' && computer == 'r')
    {
        return 1;
    }
    else if (computer == 'p' && human == 'r')
    {
        return -1;
    }
    if (human == 's' && computer == 'p')
    {
        return 1;
    }
    else if (computer == 's' && human == 'p')
    {
        return -1;
    }
}
int main(int argc, char const *argv[])
{
    char Human;
    char Computer;
    int num1;
    int total_steps = 1, gess;
    srand(time(0));
    int num = rand() % 100 + 1; // genrate number
    printf("Enter 'r' for rock 'p'for paper and 's' for sizzers \n");
    scanf("%c", &Human);
    printf("The value Random number is %d\n", num);
    if (num <= 33)
    {
        Computer = 's';
    }
    else if (num > 33 && num <= 66)
    {
        Computer = 'p';
    }
    else
    {
        Computer = 'r';
    }
    num1 = calsum(Human, Computer);
    if (num1 == 0)
    {
        printf("GAme Draw!\n");
    }
    else if (num1 == 1)
    {
        printf("the Human WOn!\n");
    }
    else
    {
        printf("The COmputer Won!\n");
    }
    printf("the value of computer is %c and value of human is %c",Computer,Human);
    return 0;
}
