/*
Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.
*/
#include <stdio.h>

int main(){
    int x;
    int y;

    printf("Enter the 1st number: ");
    scanf("%d", &x);

    printf("Enter the 2nd number: ");
    scanf("%d", &y);

    printf("The sum of %d and %d is: %d\n", x, y, x+y);
    printf("The difference of %d and %d is: %d\n", x, y, x-y);
    printf("The product of %d and %d is: %d\n", x, y, x*y);
    printf("The quotient of %d and %d is: %d\n", x, y, x/y);
    return 0;
}
