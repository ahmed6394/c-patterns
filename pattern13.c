// Enter N: 5
// *   *
//  * *
//   *
//  * *
// *   *

#include <stdio.h>

int main(void)
{
    int n, row, col;
    printf("Enter N: ");
    scanf("%i", &n);

    for (row = 1; row <= n; row++)
    {
        /* code */
        for (col = 1; col <= n; col++)
        {
            if (row == col || col == n - row + 1)
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