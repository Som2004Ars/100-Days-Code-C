/*Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.
*/
#include <stdio.h>

int main(){

    int tot_seconds;
    printf("Enter total seconds: ");
    scanf("%d", &tot_seconds);

    int hours = tot_seconds / 3600;
    int minutes = (tot_seconds % 3600) / 60;
    int seconds = tot_seconds % 60;

    printf("Time: %d hours:%d minutes:%d seconds", hours, minutes, seconds);
    return 0;
}
