// Enter the height: 5
//     # #
//    ## ##
//   ### ###
//  #### ####
// ##### #####
#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter the height: ");
    scanf("%i", &n);
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= n - row; col++)
        {
            printf(" ");
        }
        for (int col = 1; col <= row; col++)
        {
            printf("#");
        }
        printf(" ");
        for (int col = 1; col <= row; col++)
        {
            printf("#");
        }
        printf("\n");
    }
}