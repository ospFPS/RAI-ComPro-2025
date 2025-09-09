#include<stdio.h>

int main() 
{
    int size = 6;
	int array[] = {3,1,2,4,5,6};
    int *ptr_array = array;
    int i,sum_num=0;
    
    for (i=0;i<size;i++) 
     {
        sum_num += *ptr_array;
        *ptr_array++;
     }
     printf("The sum of array is %d\n",sum_num);
}
