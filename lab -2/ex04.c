#include <stdio.h>

int main(){

    int ID,ComProScore;
    float PhyScore,CalScore;
    char name[10];
    

    printf("Enter your Name: ");
    scanf("%s",name);

    printf("Enter your student ID: ");
    scanf("%d", &ID);
 
    printf("Enter your Programming score: ");
    scanf("%d",&ComProScore);

    printf("Enter your Physics score: ");
    scanf("%f",&PhyScore);

    printf("Enter your Calculus score: ");
    scanf("%f",&CalScore);

    float GPA = (PhyScore+CalScore+ComProScore)/3;

    printf("\nHi (%s%d)! Your GPA is %.2f\n",name,ID,GPA);

    return 0;
}


//Enter your Name: M
//Enter your student ID: 6300000
//Enter your Programming score: 4
//Enter your Physics score: 3.0
//Enter your Calculus score: 2.5
//Hi M(6300000)! Your GPA is 3.17