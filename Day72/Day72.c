/*
Q122: Write a C program that opens an existing file (e.g., info.txt) and reads its contents using fgets(). The program should print all the lines to the console until EOF (end of file) is reached.
*/
#include <stdio.h>

int main() {
    FILE *fp;
    char str[1000];

    // Open existing file in read mode
    fp = fopen("info.txt", "r");

    if (fp == NULL) {
        printf("Error opening file!");
        return 1;
    }

    // Read and print each line until EOF
    while (fgets(str, sizeof(str), fp) != NULL) {
        printf("%s", str);
    }

    // Close the file
    fclose(fp);

    return 0;
}
