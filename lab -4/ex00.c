#include<stdio.h>

int main(){

    int num1,num2,menu;
    
    printf("Enter Num1 : ");
    scanf(" %d",&num1);
    printf("Enter Num2 : ");
    scanf(" %d",&num2); 
    printf("calculator Menu:\n1. +\n2. -\n3. *\n4. /\nChoose menu: ");
    scanf(" %d",&menu);

    if(menu == 1){
        printf("Ans : Num1 + Num2 = %d\n",num1+num2);
    }
    else if (menu == 2){
        printf("Ans : Num1 - Num2 = %d\n",num1-num2);
    }
    else if (menu == 3){
        printf("Ans : Num1 - Num2 = %d\n",num1*num2);
    }
    else if (menu == 4){
        printf("Ans : Num1 - Num2 = %d\n",num1/num2);
    }
    else{
        printf("error");
    }
}
