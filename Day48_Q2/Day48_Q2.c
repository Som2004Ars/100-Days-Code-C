/*
Q96: Reverse each word in a sentence without changing the word order.
*/

#include <stdio.h>
#include <string.h>

void reverse(char str[], int start, int end) {
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char str[200];
    int start = 0, i;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' || str[i] == '\n') {
            reverse(str, start, i - 1);
            start = i + 1;
        }
    }

    printf("Reversed words: %s", str);

    return 0;
}
