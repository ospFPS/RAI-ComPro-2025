#include <stdio.h>

struct S {
    int num1;
    int num2;
    int sum;
};

int main() {
    struct S s;
    struct S *ptr = &s;   

    printf("Enter first number: ");
    scanf("%d", &ptr->num1);

    printf("Enter second number: ");
    scanf("%d", &ptr->num2);

    ptr->sum = ptr->num1 + ptr->num2;
    
    printf("\nFirst number:  %d", ptr->num1);
    printf("\nSecond number: %d", ptr->num2);
    printf("\nSummation:     %d\n", ptr->sum);

    return 0;
}
