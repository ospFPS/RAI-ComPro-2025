#include <stdio.h>

int a;
int main(){

    printf("Enter a number: ");
    scanf("%d",&a);

    switch (a>1 && a <=100){
        case 1:
         switch(a%2){
            case 0: printf("%d is even\n",a);
            break;
            case 1: printf("%d is odd\n",a);
            break;
        } 
        break;
        default: printf("%d is out of range\n",a);
    }
    
    return 0;
}

