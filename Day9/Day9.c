/*
Q17: Write a program to find the roots of a quadratic equation and categorize them.
*/

#include <stdio.h>

int main()
{
    float a, b, c, d;
    float root1, root2;
    float real, imaginary;
    float x, y;
    int i;

    printf("Enter a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == 0)
    {
        printf("Not a quadratic equation.");
    }
    else
    {
        d = b * b - 4 * a * c;

        if (d > 0)
        {
            x = d;
            y = 1;

            for (i = 0; i < 20; i++)
            {
                x = (x + y) / 2;
                y = d / x;
            }

            root1 = (-b + x) / (2 * a);
            root2 = (-b - x) / (2 * a);

            printf("Roots are real and distinct.\n");
            printf("Root 1 = %.2f\n", root1);
            printf("Root 2 = %.2f\n", root2);
        }
        else if (d == 0)
        {
            root1 = -b / (2 * a);

            printf("Roots are real and equal.\n");
            printf("Root 1 = Root 2 = %.2f\n", root1);
        }
        else
        {
            x = -d;
            y = 1;

            for (i = 0; i < 20; i++)
            {
                x = (x + y) / 2;
                y = (-d) / x;
            }

            real = -b / (2 * a);
            imaginary = x / (2 * a);

            printf("Roots are complex.\n");
            printf("Root 1 = %.2f + %.2fi\n", real, imaginary);
            printf("Root 2 = %.2f - %.2fi\n", real, imaginary);
        }
    }

    return 0;
}
