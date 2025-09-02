#include<stdio.h>

int main()
{
    int n=5,row,col;
    for(row=1;row<=n;row++)
    {
        for(col=row;col<=n;col++)
        {
            printf("  ");
        }
                for(col=1;col<=(2*row-1);col++)
                {
                    printf("y ");
                }
        printf("\n");
    }
}