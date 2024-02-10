// Enter the N: 5
// E E E E E
// D D D D
// C C C
// B B
// A

#include <stdio.h>

int main(void)
{
    int n, row, col;
    printf("Enter the N: ");
    scanf("%i", &n);

    for (row = n; row > 0; row--)
    {
        for (col = 1; col <= row; col++)
        {
            printf("%c ", row + 64);
        }
        printf("\n");
    }

    return 0;
}
