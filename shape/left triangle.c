#include<stdio.h>

int n,row,col;

int main()
{
    printf("value of n: ");
    scanf("%d",&n);

    for(row=1;row<=n;row++)
    {
        for(col=1;col<=row;col++)
        {
            if(col==1 || col==row || row==n)
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
