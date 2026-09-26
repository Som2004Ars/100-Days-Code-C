/*
Q95: Check if one string is a rotation of another.
*/

#include <stdio.h>
#include <string.h>

int isRotation(char s1[], char s2[]) {
    int len1 = strlen(s1);
    int len2 = strlen(s2);

    if (len1 != len2)
        return 0;

    if (len1 == 0)
        return 1;

    char temp[2 * len1 + 1];

    strcpy(temp, s1);
    strcat(temp, s1);

    return strstr(temp, s2) != NULL;
}

int main() {
    char s1[100], s2[100];

    printf("Enter first string: ");
    scanf("%99s", s1);

    printf("Enter second string: ");
    scanf("%99s", s2);

    if (isRotation(s1, s2))
        printf("Yes, the strings are rotations.\n");
    else
        printf("No, the strings are not rotations.\n");

    return 0;
}
