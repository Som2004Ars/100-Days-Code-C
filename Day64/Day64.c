/*
Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.
*/
#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    int i, j;
    int maxLength = 0;
    int start = 0;

    printf("Enter a string: ");
    scanf("%s", s);

    int n = strlen(s);

    for (i = 0; i < n; i++) {
        for (j = start; j < i; j++) {
            if (s[i] == s[j]) {
                start = j + 1;
                break;
            }
        }

        if (i - start + 1 > maxLength) {
            maxLength = i - start + 1;
        }
    }

    printf("Length of longest substring = %d\n", maxLength);

    return 0;
}
