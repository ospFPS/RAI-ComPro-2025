#include<stdio.h>

int main()
{

/*char id0001[9],id0002[9],id0003[9],id1158[9],id1159[9];
float point0001,point0002,point0003,point1158,point1159;
scanf ("%s",id0001);
scanf ("%f",&point0001);

scanf ("%s",id1159);
scanf ("%f",&point1159);*/

/*char id[1159][9]; float point[1159]; int i;
for (i=0;i<1159;i++)
{
scanf ("%s",id[i]);
scanf ("%f",&point[i]);
}
return 0;*/


/*int number[3] = {23, -186, 43};
float value_2[5]={0.98,43.213,-3.47,52.08,-0.987};
char vowel[5] = {'a','e','i','o','u'};
char name[9] = {'E','n','g','i','n','e','e','r','0'};

printf("%c\n",name[2]);
printf("%d\n",number[2]);
printf("%.1f\n",value_2[2]);

return 0;
*/
/*
int a,count,num,range1=0,range2=0,range3=0,range4=0;
float high[300],sumhigh=0,avg=0;

printf(" enter number of student : ");
scanf("%d",&num);
for (count=0; count<=num; count++)
{
    printf("stduent %2d: ",count+1);
    scanf("%f",&high[count]);
}
for (count=0; count<num; count++)
{
if (high[count]<=160)
range1++;
else if (high[count]<=170)
range2++;
else if (high[count]<=180)
range3++;
else
range4++;
sumhigh = sumhigh + high[count];
}
avg = sumhigh/num;

printf ("\n 0 - 160 : %3d",range1);
printf ("\n161 - 170 : %3d",range2);
printf ("\n171 - 180 : %3d",range3);
printf ("\n181 - 200 : %3d",range4);
printf ("\n\nAverage : %f",avg);
return 0; 
*/
/*
int num[3][4] = {11, 12, 13, 14,
                 21, 22, 23, 24,
                 31, 32, 33, 34};

 char str[2][10] = {"Engineer",
                    "KMITL"};

     printf("%d\n",num[2][3]);
     printf("%c\n",str[0][7]);
     */

/*
int matrix [3] [3],r,c;
for (r=0; r<3; r++)
{
for(c=0; c<3; c++)
{
printf ("Enter numbers [%d] [%d] : ",r,c);
scanf ("%d", &matrix [r] [c]);
}
}

printf("\n***show matrix***\n");

for(r=0;r<3;r++)
{
    for(c=0;c<3;c++)
{
printf ("%5d", matrix [r][c]);
}
printf ("\n");
return 0;
}
*/
#define SIZE 10

int num[SIZE],temp,n;
for (n=0; n<SIZE; n++)
{
printf ("Enter num[%d] : ",n+1);
scanf ("%d",&num[n]);
}

for (n=0; n<SIZE-1; n++)
{
if (num[n]>num[n+1])
{
temp = num[n+1];
num[n+1] = num[n];
num[n] = temp;
}
}
printf ("The maximum number = %d",num[SIZE-1]);
return 0;
}


