#include <stdio.h>


int main(){
 /*
    while(num <= 10) {
        printf("%d\n",num++);
    }

    while(num <= 99) {
        printf("%d\n",num++);
    }
    */

   /*
    int i=1,final,sum=0;
    printf("final value: ");
    scanf("%d",&final);
    while(i<=final){
        sum = sum+i;
        i++;
    }
    printf("sum of 1 to final is : %d\n",sum);
    return 0;
    */

    /*    
    int i=1,final=100,sum=0;
    do
    {
      sum = sum+i;
      i++;
    }
    while(i<=final);

    printf("sum of 1 to final is : %d\n",sum);
    */
    
    int sum = 0, count;
    for (count=1; count<=100; count++)
    {
        if(count%2==0){
           sum = sum + count; 
        }
    }
    printf ("Summation of 1 to 100 = %d", sum);
    return 0;
}

