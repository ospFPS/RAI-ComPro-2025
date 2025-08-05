#include<stdio.h>
#define SIZE 8

int main()
{
  int count=0,n,max=0,min=0,temp;
  int num[SIZE];

  for(count=1;count<=8;count++)
  {
    printf("Enter the value %d here : ",count);
    scanf("%d",&num[n++]);
  }
  for (n=0; n<SIZE; n++)
    {
      max=num[0];
      min=num[0];
      for(n=1;n<SIZE;n++)
      {
        if(num[n]>max)
        {
          max = num[n];
        }
        else
         min = num[n];
      }
    }
    printf("Largest numbers: %d\n",max);
    printf("Smallest numbers: %d\n",min);
}
/*
Enter number 1: 23
Enter number 2: 10
...
Enter number 8: 55
Smallest number: 10
Largest number: 89
*/