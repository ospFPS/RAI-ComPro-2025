#include <stdio.h>

int main() {
    int arr[5];
    int *ptr_arr = arr;   
    int i,j,temp,n=5;

    printf("Enter 5 integers: ");
    for (i=0;i<n;i++) 
    {
        scanf("%d",(ptr_arr+i));   
    }

    for (i=0;i<n-1;i++) 
    {
        for (j=0;j<n-i-1;j++) 
        {
            if (*(ptr_arr+j)>*(ptr_arr+(j+1))) 
            {
                temp=*(ptr_arr + j);
                *(ptr_arr+j) = *(ptr_arr+(j+1));
                *(ptr_arr+(j+1)) = temp;
            }
        }
    }

    printf("Sorted: %d",*ptr_arr);
    for (i=1;i<n;i++) 
    {
        printf(" %d",*(ptr_arr+i));
    }
    printf("\n");
    return 0;
}
