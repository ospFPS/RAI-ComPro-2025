#include<stdio.h>
int main()
{
int num,FacNum=1,count;
printf("Enter a number: ");
scanf("%d",&num);

for(count=1; count<=num; count++)
{   
    FacNum *= count; 
}
printf("Factorial number of %d is %d\n",num,FacNum);
return 0;
}
