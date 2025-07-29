#include<stdio.h>

int main(){

int sum=0, num,count;
float avg;

printf("Enter the number 1o times \n");
for(count =1;count<= 10;count++)
{
   printf("Enter the number %d: ", count);
   scanf("%d",&num);
   sum = sum+num;
}
   avg = sum/10;
   printf("Total sum is : %d\n",sum);
   printf("Average is : %.2f\n",avg);
   return 0;
}
