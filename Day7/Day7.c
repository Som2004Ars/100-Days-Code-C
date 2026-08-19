/*Q13: Write a program to input a year and check whether it is a leap year or not using conditional statements.
*/
#include <stdio.h>

int main(){
    int x;
    printf("Enter a year: ");
    scanf("%d", &x);

    if(x % 400 == 0){
        printf("%d is a leap year.", x);
    }
    else if(x % 4 == 0 && x % 100 != 0){
        printf("%d is a leap year.", x);
    }
    else{
        printf("%d is not a leap year.", x);
    }
    return 0;
}
