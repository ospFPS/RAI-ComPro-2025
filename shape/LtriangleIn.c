#include<stdio.h>

int n,row,col;

int main()
{
 printf("value of n: ");
 scanf("%d",&n);

 for(row=1;row<=n;row++)
 {
    for(col=row;col<=n;col++)
    {
        if(col==n || col==row || row==1)
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