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

if(s[1].score >= s[2].score && s[1].score >= s[3].score)
{
        printf("\nThe highest scores belongs to %s %s at %.1f scores!",s[1].name,s[1].surname,s[1].score);
}

else if(s[2].score >= s[1].score && s[2].score >= s[3].score)
{
        printf("\nThe highest scores belongs to %s %s at %.1f scores!",s[2].name,s[2].surname,s[2].score);
}

else
{
        printf("\nThe highest scores belongs to %s %s at %.1f scores!",s[3].name,s[3].surname,s[3].score);
}
}

