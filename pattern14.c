// Enter N: 5 ** Foyed Triangle
// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15
#include <stdio.h>

int main(void)
{
    int n, row, col;
    printf("Enter N: ");
    scanf("%i", &n);
    int count = 0;
    for (row = 1; row <= n; row++)
    {
        for (col = 1; col <= row; col++)
        {
            printf("%i ", ++count);
        }

        printf("\n");
    }
}