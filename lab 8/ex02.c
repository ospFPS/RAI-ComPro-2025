#include<stdio.h>

int main() 
{
    int a = 0;
    int b = 5;
    int *ptr_a =&a;
    int *ptr_b =&b;
    int temp;

    printf("Before reverse: a = %u,b = %u \n",*ptr_a,*ptr_b);

    temp = *ptr_a;
    *ptr_a = *ptr_b;
    *ptr_b = temp;

    printf("After reverse: a = %u,b = %u \n",*ptr_a,*ptr_b);

}


