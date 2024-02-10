// Enter the Height: 5
//     *****
//    *   *
//   *   *
//  *   *
// *****

#include <stdio.h>

int main(void)
{
    int height, row, col;
    printf("Enter the Height: ");
    scanf("%i", &height);

    for (row = 1; row <= height; row++)
    {
        for (col = 1; col <= height - row; col++)
        {
            printf(" ");
        }
        /* Print stars and center spaces */
        for (col = 1; col <= height; col++)
        {
            if (row == 1 || row == height || col == 1 || col == height)
                printf("*");
            else
                printf(" ");
        }

        printf("\n");
    }
}