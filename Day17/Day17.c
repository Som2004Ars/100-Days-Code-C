/*
Q33: Write a program to check if a number is an Armstrong number.
*/

#include <stdio.h>

int main() {
    int n, original, remainder, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    while (n != 0) {
        remainder = n % 10;
        sum += remainder * remainder * remainder;
        n = n / 10;
    }

    if (sum == original) {
        printf("%d is an Armstrong number.\n", original);
    } else {
        printf("%d is not an Armstrong number.\n", original);
    }

    return 0;
}
