#include<stdio.h>


int main()
{
  int count=0,n,even=0,odd=0;
  int num[10];
   
  for(count=1;count<=10;count++)
  {
    printf("Enter the value %d : ",count);
    scanf("%d",&num[n++]);
  }
  for(n=0;n<10;n++)
  {
    if(num[n]%2==0){
        even++;
    }
    else{
        odd++;
    }
  }
    printf("Even numbers: %d\n",even);
    printf("Odd numbers: %d\n",odd);
}

/*Enter value 1: 3
Enter value 2: 6
...
Enter value 10: 10
Even numbers: 6
Odd numbers: 4*/