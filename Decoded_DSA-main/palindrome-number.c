#include <stdio.h>

int main()
{
    int number, original_number, reversed_number = 0;
    printf("Enter any number: ");
    scanf("%d", &original_number);

    number = original_number;

    while (number > 0)
    {
        int digit = number % 10;
        reversed_number = reversed_number * 10 + digit;
        number = number / 10;
    }

    if (reversed_number == original_number)
    {
        printf("%d is a palindrome number\n", original_number);
    }
    else
    {
        printf("%d is not a palindrome number\n", original_number);
    }

    return 0;
}
