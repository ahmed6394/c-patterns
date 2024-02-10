// Enter N: 5
//     1
//    121
//   12321
//  1234321
// 123454321
//  1234321
//   12321
//    121
//     1


#include <stdio.h>

int main(void)
{
    int n, row, col;
    printf("Enter N: ");
    scanf("%i", &n);
    for (row = 1; row <= n; row++)
    {
        for (col = 1; col <= n-row; col++)
        {
            printf(" ");
        }
        for (col = 1; col <= row; col++)
        {
            printf("%i", col);
        }
        for (col = row-1; col >0; col--)
        {
            printf("%i", col);
        }
        printf("\n");
    }
    for ( row =n-1; row > 0; row--){
        for(col=1; col <= n-row; col++){
            printf(" ");
        }
        for ( col = 1; col <=row ; col++)
        {
            printf("%i", col);
        }
        for ( col = row-1; col >= 1 ; col--)
        {
            printf("%i", col);
        }
        printf("\n");
    }
    
}