/*Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.
*/
#include <stdio.h>

int main(){
    float principal;
    printf("Enter principal value: ");
    scanf("%f", &principal);

    float rate;
    printf("Enter rate: ");
    scanf("%f", &rate);

    int time = 2;                   //In years

    float simple_int = (principal * rate * time) / 100;

    float compound_int = principal * (1 + rate / 100) * (1 + rate / 100) - principal;

    printf("Simple Interest: %f", simple_int);
    printf("Compound Interest: %f", compound_int);
    return 0;

}
