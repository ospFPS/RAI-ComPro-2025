#include <stdio.h>

int main(){

    int age;
    float height;
    char uni[10],first[10],last[10];
    

    printf("Enter your full name: ");
    scanf("%s %s",first, last);

    printf("Enter your age: ");
    scanf("%d", &age);
 
    printf("Enter your heght: ");
    scanf("%f",&height);

    printf("Enter you University name: ");
    scanf("%s",uni);
  
    printf("\nHi! Everyone. This is K.%s from %s. I am %d years old and my height is\n %.1f cm tall.\n", first,uni,age,height);
    return 0;
}


