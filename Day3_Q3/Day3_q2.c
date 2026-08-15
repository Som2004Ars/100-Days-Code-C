/*
Q6: Write a program to swap two numbers using a third variable.
*/

#include <stdio.h>

int main(){
    int a;
    int b;

    printf("Enter the first number(a): ");
    scanf("%d", &a);

    printf("Enter the second number(b): ");
    scanf("%d", &b);

    printf("The numbers before swapping a = %d b = %d\n", a, b);
    int c = a;
    a = b;
    b = c;

    printf("The numbers after swapping a = %d b = %d", a, b);
    return 0;
}
