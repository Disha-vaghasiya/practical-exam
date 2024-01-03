#include <stdio.h>


void find(int, int*);

int main() {
    int fact;
    int num1; 

   
    printf(" Enter any number : ");
    scanf("%d", &num1);		

   
    find(num1, &fact);

   
    printf(" The Factorial of %d is : %d \n\n", num1, fact);

    return 0;
}


void find(int n, int *f) {
    int i;
    *f = 1; 

   
    for (i = 1; i <= n; i++) {
        *f = *f * i; 
    }
}

