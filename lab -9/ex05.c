#include <stdio.h>

int main()
{
    int n,i;
    int num,even_sum=0,odd_sum=0;

    printf("N: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Input: ");
        scanf("%d", &num);

        if (num%2==0)
            even_sum += num;
        else
            odd_sum += num;
    }

    printf("Output: Sum of even number: %d\n", even_sum);
    printf("        Sum of odd number: %d\n", odd_sum);

    return 0;
}
