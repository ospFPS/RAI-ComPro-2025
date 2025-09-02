#include <stdio.h>

int n, row, col;

int main()
{
    printf("value of n: ");
    scanf("%d", &n);
    for (row = 1; row <= n; row++)
    {
        for (col = 1; col <= n; col++)
        {
            if (col == 1 || col == n || row == 1 || row == n || col == row || row+col== n+1)
            {
                printf("X ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}