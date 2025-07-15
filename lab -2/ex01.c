#include <stdio.h>

int main(){

    int number;
    float b;
    char c[0];

    printf("Please enter an integer value: ");
    scanf("%d",&number);
    printf("You entered %d\n",number);

    printf("Please enter a float value: ");
    scanf("%f", &b);
    printf("You entered %.2f\n",b);

    printf("Please enter a character: ");
    scanf("%s", c);
    printf("You entered %s\n",c);

    return 0;
}

