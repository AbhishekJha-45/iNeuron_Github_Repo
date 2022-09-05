#include <stdio.h>
#include <string.h>
char strNumber[10];
char digit;
int i, matchRes;
void checkForDigit(char array[], char digit)
{
    for (i = 0; i < 10; i++)
    {
        if (array[i] == digit)
        {
            printf("__Match Found__");
            matchRes = 1;
            break;
        }
    }

    if (matchRes != 1)
    {
        printf("__Match Not Found__");
    }
}
int main()
{
    printf("Enter a 5 Digit number : ");
    gets(strNumber);
    printf("Enter a digit to check : ");
    scanf("%s", &digit);
    checkForDigit(strNumber, digit);
    return 0;
}