#include <stdio.h>

int a;
int main(){

    printf("Enter a number: ");
    scanf("%d",&a);

    if(a >100){
        printf("%d is out of range\n ", a);
    }
      else if ((a % 2 == 0) < 100) {

        printf("%d is even\n ", a);
    }

    else if ((a % 2 != 0) ) {

        printf("%d is odd\n ", a);
    }

    return 0;

}

