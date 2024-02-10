// Enter your number:
// 5
// 12345
// #1234
// ##123
// ###12
// ####1
#include <stdio.h>

int main(void)
{
    int n, row, col;
    printf("Enter your number: \n");
    scanf("%i", &n);
    for (row = n; row > 0; row--)
    {
        for (col = 1; col <= n - row; col++)
        {
            printf("#");
        }

        for (col = 1; col <= row; col++)
        {
            printf("%i", col);
        }
        printf("\n");
    }
}