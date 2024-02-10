// Enter N: 5
// *
// **
// * *
// *  *
// *****
#include <stdio.h>
int main(void)
{
    int n, row, col;
    printf("Enter N: ");
    scanf("%i", &n);
    for (row = 1; row <= n; row++)
    {
        for (col = 1; col <= row; col++)
        {
            if (row == 1 || row == n || col == 1 || col == row)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}