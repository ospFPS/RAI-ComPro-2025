#include<stdio.h>
#include<math.h>
int i;
int main()
{

struct profile
{
    float x,y;

}v[2];

for(i=1;i<=2;i++)
{
   printf("x%d: ",i);
   scanf("%f",&v[i].x);
   printf("y%d: ",i);
   scanf("%f",&v[i].y);
}

double d = sqrt(pow(v[2].x - v[1].x, 2) + pow(v[2].y - v[1].y, 2));

printf("\nDistance between (%.1f, %.1f) and (%.f, %.f) is %.3f unit(s)",v[1].x,v[1].y,v[2].x,v[2].y,d);
}
