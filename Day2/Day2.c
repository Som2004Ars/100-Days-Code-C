/*
Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
*/

#include <stdio.h>

int main(){

    int x;
    int y;

    printf("Enter the length(cm): ");
    scanf("%d", &x);

    printf("Enter the breadth(cm): ");
    scanf("%d", &y);

    int area = x*y;

    printf("The area of rectangle with length %d and breadth %d is: %dcm", x, y, area);
    return 0;
}
