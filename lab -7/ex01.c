#include<stdio.h>
#include<string.h>

int i;
int main()
{

struct profile
{
    char name[100],surname[100];
    int age;
    float score;

}s[3];

for(i=1;i<=3;i++)
{
   printf("\nstudent %d's name: ",i);
   scanf("%s %s",s[i].name,s[i].surname);
   printf("student %d's age: ",i);
   scanf("%d",&s[i].age);
   printf("student %d's score: ",i);
   scanf("%f",&s[i].score);
}

for(i=1;i<=3;i++)
{
    printf("\nstudent %d's name is %s %s,age %d.\n",i,s[i].name,s[i].surname,s[i].age);
}
}