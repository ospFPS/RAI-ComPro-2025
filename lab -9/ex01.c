#include <stdio.h>
#include <math.h>

float Circ(float r)
 {
    float pi;
    pi = 3.14;
    float cir = pi*r*2;
    return cir;
}

float Area(float r) 
{
    float pi;
    pi = 3.14;
    float area = pi*r*r;
    return area;
}

int main() 
{
    float r;

    printf("Enter the radius in cm: ");
    scanf("%f", &r);

    float cir = Circ(r);
    float area = Area(r);

    printf("The circumference of the triangle is: %.2f\n", cir);
    printf("The area of the triangle is: %.2f\n", area);

    return 0;
}