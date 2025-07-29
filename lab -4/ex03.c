#include<stdio.h>
#include<stdlib.h>

int sumnum = 0,num,count=1;

int main()
{
    do{
    printf("Enter the number: ");
    scanf("%d",&num);
    count++ ;

    if(num%2==0 &&num != 0){
        printf("%d is even number\n",num);
    }
    else if(num == 0){
        printf("Exiting Program... Bye\n");
        exit(0);
    }
    else{
        printf("%d is odd number\n",num);
        }
    }
    while(count<=10);
    return 0;
}

