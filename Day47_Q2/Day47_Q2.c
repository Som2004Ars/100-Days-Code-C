/*
Q94: Find the longest word in a sentence.
*/

#include <stdio.h>
#include <string.h>

int main() {
    char sentence[200];
    char word[50], longest[50];
    int i, j = 0, maxLength = 0;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    for (i = 0; ; i++) {
        if (sentence[i] != ' ' && sentence[i] != '\n' && sentence[i] != '\0') {
            word[j++] = sentence[i];
        } else {
            word[j] = '\0';

            if (j > maxLength) {
                maxLength = j;
                strcpy(longest, word);
            }

            j = 0;

            if (sentence[i] == '\0' || sentence[i] == '\n')
                break;
        }
    }

    printf("Longest word: %s\n", longest);
    printf("Length: %d\n", maxLength);

    return 0;
}
