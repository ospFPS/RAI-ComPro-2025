#include<stdio.h>

int main() {
	int test = 0;
    int *ptr_test =&test; 

    printf("The address of test variable is at: %p",ptr_test);
}
