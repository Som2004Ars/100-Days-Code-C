/*
Q93: Check if two strings are anagrams of each other.
*/

include <stdio.h>
#include <string.h>

int main() {
    char sentence[200];
    char longest[50];
    int i = 0, j = 0, maxLen = 0, len = 0;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    while (sentence[i] != '\0') {
        if (sentence[i] != ' ' && sentence[i] != '\n') {
            len++;
        } else {
            if (len > maxLen) {
                maxLen = len;
                strncpy(longest, &sentence[i - len], len);
                longest[len] = '\0';
            }
            len = 0;
        }
        i++;
    }

    printf("Longest word: %s\n", longest);
    printf("Length: %d\n", maxLen);

    return 0;
}
