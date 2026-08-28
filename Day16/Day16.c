/*
Q31: Write a program to take a number as input and print its equivalent binary representation.
*/

#include <stdio.h>

int main() {
    int n, binary[32], i = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("Binary representation = 0\n");
        return 0;
    }

    while (n > 0) {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }

    printf("Binary representation = ");

    while (i > 0) {
        i--;
        printf("%d", binary[i]);
    }

    printf("\n");

    return 0;
}
