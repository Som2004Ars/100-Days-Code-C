/*
Q40: Write a program to find the 1’s complement of a binary number and print it.
*/

#include <stdio.h>

int main() {
    char binary[100];
    int i = 0;

    printf("Enter a binary number: ");
    scanf("%s", binary);

    printf("1's complement = ");

    while (binary[i] != '\0') {
        if (binary[i] == '0') {
            printf("1");
        } else if (binary[i] == '1') {
            printf("0");
        } else {
            printf("\nInvalid binary number.\n");
            return 1;
        }

        i++;
    }

    printf("\n");

    return 0;
}
