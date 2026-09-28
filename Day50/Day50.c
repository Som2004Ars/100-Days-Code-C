/*
Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.
*/

#include <stdio.h>
#include <string.h>

int main() {
    char date[20];
    char result[20];

    printf("Enter date (dd/04/yyyy): ");
    scanf("%s", date);

    strcpy(result, date);
    result[2] = '-';

    result[3] = 'A';
    result[4] = 'p';
    result[5] = 'r';
    result[6] = '-';

    result[7] = date[6];
    result[8] = date[7];
    result[9] = date[8];
    result[10] = date[9];
    result[11] = '\0';

    printf("%s\n", result);

    return 0;
}
