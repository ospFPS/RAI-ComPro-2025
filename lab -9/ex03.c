#include<stdio.h>

int i;

void TwoNum (int n1, int n2) 
{
    int ans=(n1*n1)+(n2*n2);
    printf("Sum of squares of 2 and 3 is %d\n",ans);
}

int main()
{
    int x,y;
    printf("enter the two integers:");
    scanf("%d %d",&x,&y);
    
    TwoNum(x,y);

    return 0;
}