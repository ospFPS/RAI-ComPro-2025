#include <stdio.h>

void checkEvenOdd(int num,int*even_sum,int*odd_sum) 
{
    if (num%2==0)
        *even_sum += num;
    else
        *odd_sum += num;
}

int getInput() 
{
    int num;
    printf("Input: ");
    scanf("%d", &num);
    return num;
}

int main() 
{
    int n,i;
    int num,even_sum = 0,odd_sum = 0;

    printf("N: ");
    scanf("%d", &n);

    for (i=0;i<n;i++) 
    {
        num = getInput();
        checkEvenOdd(num,&even_sum,&odd_sum);
    }

    printf("Output: Sum of even number: %d\n", even_sum);
    printf("        Sum of odd number: %d\n", odd_sum);

    return 0;
}S