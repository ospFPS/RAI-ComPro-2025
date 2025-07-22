#include <stdio.h>

int a,b;
int main(){

    printf("enter a number : ");
    scanf("%d",&a);
    printf("enter a number : ");
    scanf("%d",&b);

    if(a == b){
        printf("Match\n");
    }
    else{
        printf("Does not match. Try again\n");
    }
    return 0;
}