#include <stdio.h>

int main(){
    int age,weight;
    float height;
    char gender[0],education[15],name[20];
    printf("Enter your Name: ");
    scanf(" %s",name);

    printf("Enter your Age: ");
    scanf("%d", &age);
 
    printf("Enter your height: ");
    scanf("%f",&height);

    printf("Enter your weight: ");
    scanf("%d",&weight);

    printf("Enter your gender: ");
    scanf("%s",gender);
    
    printf("Enter your Education Qualification: ");
    scanf("%s",education);

    printf("\nName : %s     Age: %d     Gender: %s\n", name,age,gender);
    printf("Height: %.1f    Weight: %d\n",height,weight);
    printf("Education: %s\n",education);
    return 0;
}

