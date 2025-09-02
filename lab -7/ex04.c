#include<stdio.h>

int i;
int main()
{

struct profile
{
    float x,y;
}u,v;

{
   printf("u_x: ");
   scanf("%f",&u.x);
   printf("U_y: ");
   scanf("%f",&u.y);
   printf("v_x: ");
   scanf("%f",&v.x);
   printf("v_y: ");
   scanf("%f",&v.y);
}
float uTotal = u.x + v.x;
float vTotal = u.y + v.y;
printf("\nResultant vector is equvalence to %.1fi + %.1fj",uTotal,vTotal);
}



