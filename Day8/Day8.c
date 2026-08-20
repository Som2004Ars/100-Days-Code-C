/*
Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.
*/
#include <stdio.h>

int main(){
    char x;
    printf("Enter a character: ");
    scanf("%c", &x);

    if (x >= 'A' && x <= 'Z'){
        printf("%c is an aplhabet.", x);
    }
    else if (x >= 'a' && x <= 'z'){
        printf("%c is an aplhabet.", x);
    }
    else if (x >= '0' && x <= '9'){
        printf("%c is a digit.", x);
    }
    else{
        printf("%c is a special character.", x);
    }
    return 0;
}
