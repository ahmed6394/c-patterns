// Enter pyramid height: 
// 5

// #
// # #
// # # # 
// # # # #
// # # # # #
#include <stdio.h>
int draw(int n);
int main(void)
{

    int height;
    printf("Enter pyramid height: \n");
    scanf("%i", &height);

    draw(height);
}

int draw(int n)
{
    if (n < 0)
    {
        return 1;
    }
    draw(n - 1);
    for (int j = 0; j <= n - 1; j++)
    {
        printf("# ");
    }
    printf("\n");
}