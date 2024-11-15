#include <stdio.h>
#include <conio.h>
int main()
{
    int rows;
    printf("enter the number of rows");
    scanf("%d", &rows);
    for (int i = 1; i <= rows; i++)
    {
        for (int j = i; j <= rows - 1; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= (2 * i - 1); k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}