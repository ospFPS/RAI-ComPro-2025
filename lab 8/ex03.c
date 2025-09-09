#include<stdio.h>

int main() 
{
	int array[] = {3,1,2,4,5,6};
    int i,n=6;
    int max_num = *array;

     for (i = 1; i < n; i++) {
        if (array[i] > max_num) {
            max_num = array[i];
        }
    }
    printf("Max value: %d\n", max_num);

}
