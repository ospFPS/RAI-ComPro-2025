#include <stdio.h>

int main() {
    int array_A[3][3];
    int *ptr_array_A = &array_A[0][0];  
    int i,n,cnt=9;


    for (i=0;i<3;i++) 
    {
        for (n=0;n<3;n++) 
        {
            printf("Enter value for array_A [%d],[%d]: ",i,n);
            scanf("%d", &array_A[i][n]);
        }
    }

    printf("Array A:\n");
    for (i=0;i<cnt;i++) 
    {
        printf("%d ", *(ptr_array_A + i));  
        if ((i+1)%3==0) 
        {
            printf("\n");  
        }
    }

    return 0;
}
