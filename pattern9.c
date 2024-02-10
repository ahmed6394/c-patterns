// Enter the N: 5
//     1
//    123
//   12345
//  1234567
// 123456789
//  1234567
//   12345
//    123
//     1
#include <stdio.h>

int main(void)
{
    int n, row, col;
    printf("Enter the N: ");
    scanf("%i", &n);
    for (row = 1; row <= n; row++)
    {
        for (col = 1; col <= n - row; col++)
        {
            printf(" ");
        }
        for (col = 1; col <= 2 * row - 1; col++)
        {
            printf("%i", col);
        }
        printf("\n");
    }
    for (row = n - 1; row > 0; row--)
    {
        for (col = 1; col <= n - row; col++)
        {
            printf(" ");
        }
        for (col = 1; col <= 2 * row - 1; col++)
        {
            printf("%i", col);
        }
        printf("\n");
    }
}