#include <stdio.h>

int main() 
{
    float x, y;
    float *ptr_x = &x;
    float *ptr_y = &y;
    float temp;

    printf("Enter value of x: ");
    scanf("%f",&x);
    printf("Enter value of y: ");
    scanf("%f",&y);

    printf("Before swap: x = %f, y = %f\n", *ptr_x, *ptr_y);

    temp = *ptr_x;
    *ptr_x = *ptr_y;
    *ptr_y = temp;

    printf("After swap:  x = %f, y = %f\n", *ptr_x, *ptr_y);

    return 0;
}
