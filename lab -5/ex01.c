#include<stdio.h>


int main()
{
  int count=0,n=0;
  int num[10];

  for(count=1;count<=10;count++)
  {
    printf("Enter the value %d here : ",count);
    scanf("%d",&num[n++]);
  }
    printf("Values in array are: %d,%d,%d,%d,%d,%d,%d,%d,%d,%d",num[0],num[1],num[2],num[3],num[4],num[5],num[6],num[7],num[8],num[9]);
}

/*Enter the value 1 here: 4
Enter the value 2 here: 5
...
Enter the value 10 here: 4
Values in array are: 4, 5, ...*/