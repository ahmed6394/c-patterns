// Enter the N: 5
// *****
// *   *
// *   *
// *   *
// *****
#include <stdio.h>

int main(void)
{
    int n, row, col;
    printf("Enter the N: ");
    scanf("%i", &n);
    for (row = 1; row <= n; row++)
    {
        for (col = 1; col <= n; col++)
        {
            if (row == 1 || row == n || col == 1 || col == n)
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