/*
Q115: Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".
*/

#include <stdio.h>
#include <string.h>

int main() {
    char s[1000], t[1000];
    int freq[26] = {0};
    int i, flag = 1;

    printf("Enter first string: ");
    scanf("%s", s);

    printf("Enter second string: ");
    scanf("%s", t);

    if (strlen(s) != strlen(t)) {
        flag = 0;
    } else {
        for (i = 0; s[i] != '\0'; i++) {
            freq[s[i] - 'a']++;
            freq[t[i] - 'a']--;
        }

        for (i = 0; i < 26; i++) {
            if (freq[i] != 0) {
                flag = 0;
                break;
            }
        }
    }

    if (flag == 1) {
        printf("Anagram\n");
    } else {
        printf("Not Anagram\n");
    }

    return 0;
}
