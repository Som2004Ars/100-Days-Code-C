/*
Q123: Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.
*/
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    int ch;
    int characters = 0, words = 0, lines = 0;
    int inWord = 0;
    int lastChar = '\0';

    // Open file in read mode
    fp = fopen("sample.txt", "r");

    if (fp == NULL) {
        printf("Error opening file!");
        return 1;
    }

    // Read file character by character
    while ((ch = fgetc(fp)) != EOF) {
        characters++;

        if (ch == '\n') {
            lines++;
        }

        if (isspace(ch)) {
            inWord = 0;
        } else {
            if (inWord == 0) {
                words++;
                inWord = 1;
            }
        }

        lastChar = ch;
    }

    // Count the last line if it doesn't end with newline
    if (characters > 0 && lastChar != '\n') {
        lines++;
    }

    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    fclose(fp);

    return 0;
}
