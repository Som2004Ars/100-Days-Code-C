/*
Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
*/
#include <stdio.h>

int main()
{
    float a, b, c;

    printf("Enter the three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a <= 0 || b <= 0 || c <= 0 || 
        a + b <= c || a + c <= b || b + c <= a)
    {
        printf("Invalid triangle");
    }
    else if (a == b && b == c)
    {
        printf("Equilateral triangle");
    }
    else if (a == b || b == c || a == c)
    {
        printf("Isosceles triangle");
    }
    else
    {
        printf("Scalene triangle");
    }

    return 0;
}
