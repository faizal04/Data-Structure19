#include <stdio.h>
#include <conio.h>
int main()
{
    int rows;
    printf("enter the number of rows of rhombus");
    scanf("%d", &rows);
    rows /= 2;
    if (rows % 2 == 0)
    {
        rows -= 1;

        for (int i = 0; i < rows; i++)
        {
            for (int j = i; j <= rows - 1; j++)
            {
                printf(" ");
            }
            for (int k = 0; k < 2 * i + 1; k++)
            {
                printf("*");
            }
            printf("\n");
        }
        for (int i = 0; i <= rows; i++)
        {
            for (int j = i; j <= rows * 2 - i; j++)
            {
                printf("*");
            }
            printf("\n");
            for (int k = 0; k <= i; k++)
            {
                printf(" ");
            }
        }
    }
    return 0;
}
