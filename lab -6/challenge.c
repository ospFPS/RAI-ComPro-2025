#include <stdio.h>

int main() {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int array[n], counted[n]; 

    printf("Enter %d integers: ", n);
    for (int a = 0; a < n; a++) 
    {
        scanf("%d", &array[a]);
        counted[a] = 0; 
    }
    for (int a = 0; a < n; a++) 
    {
        if (counted[a] == 0) 
        { 
            int cnt = 1; 
            for (int b = a + 1; b < n; b++) 
            {
                if (array[b] == array[a]) 
                {
                    cnt++;
                    counted[b] = 1; 
                }
            }
            printf("Element %d occurs %d times\n", array[a], cnt);
        }
    }

    return 0;
}



