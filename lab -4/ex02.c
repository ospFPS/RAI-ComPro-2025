#include<stdio.h>

int main(){

int sum=0, num,count=1;
float avg;

while(count<=10)
{
   printf("Enter the number %d: ", count++);
   scanf("%d",&num);
   sum = sum+num;
}
   printf("Total sum is : %d\n",sum);
   return 0;
}
