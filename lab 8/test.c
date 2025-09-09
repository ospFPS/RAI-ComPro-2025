/*#include <stdio.h>

int main() {
    int y,num = 15,z[10];
    int *ptr_num;

    ptr_num = &num;
    y= *ptr_num; 
    *ptr_num =0;
    ptr_num =&z[0];

    printf("Address of num    = %p \n", ptr_num);
    printf("value of num    = %u \n", *ptr_num);
    return 0;
}*/

#include<stdio.h>

int main()
{
    int x=10,y=20;
    float z = 3.14;
    char word[10];

    int *ptr_x=&x;
    int **pptr_x;
    int *ptr_y=&y;
    float *ptr_z=&z;
    char *ptr_word = word;

    **pptr_x = 
    printf("value of x: %p \n",ptr_x);
    printf("adress of xx: %u \n",**pptr_x);
    printf("adress of y: %u \n",*ptr_y);
    printf("value of word: %p \n",ptr_word);
    printf("adress of word: %u \n",*ptr_word);

    printf("value of x y z: %p %p %p",ptr_x,ptr_y,ptr_z);
}