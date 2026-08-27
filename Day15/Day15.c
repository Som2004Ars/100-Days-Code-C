/*
Q29: Write a program to calculate the factorial of a number.
*/

#include <stdio.h>

int main() {
    int n, i;
    long long factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        factorial *= i;
    }

    printf("Factorial of %d = %lld\n", n, factorial);

    return 0;
}
