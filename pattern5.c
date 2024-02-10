// Enter your N: 5
//     1
//    12
//   123
//  1234
// 12345
//  1234
//   123
//    12
//     1

#include <stdio.h>

int main(void)
{
    int n, r, c;
    printf("Enter your N: ");
    scanf("%i", &n);
    for (r = 1; r <= n; r++)
    {
        for (c = 1; c <= n - r; c++)
        {
            printf(" ");
        }
        for (c = 1; c <= r; c++)
        {
            printf("%i", c);
        }
        printf("\n");
    }
    for (r = n - 1; r > 0; r--)
    {
        for (c = 1; c <= n - r; c++)
        {
            printf(" ");
        }
        for (c = 1; c <= r; c++)
        {
            printf("%i", c);
        }

        printf("\n");
    }
}