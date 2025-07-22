#include <stdio.h>

int a,b;
float Vcone;
float A = 0.3333333333333333333333333333333333333333333;
float pi = 3.14;
int main(){

    printf("Enter cone height: ");
    scanf("%d",&a);
    printf("Enter cone base radius: ");
    scanf("%d",&b);

    Vcone = A * pi *(b * b) * a;
    printf("cone volume = %.1f",Vcone);
    
    if(Vcone >= 260){
    printf("\nThis cone is perfect for Supun project\n");
    }
    else if(Vcone < 260){
    printf("\nThis cone is not fit for this project\n");
    }

    return 0;

}
