// Enter N: 5
// A
// A B
// A B C
// A B C D
// A B C D E
// A B C D
// A B C
// A B
// A

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
            printf("%c ", col + 64);
        }
        printf("\n");
    }
    for (row = n - 1; row >= 1; row--)
    {
        for (col = 1; col <= row; col++)
        {
            printf("%c ", col + 64);
        }
        printf("\n");
    }
}