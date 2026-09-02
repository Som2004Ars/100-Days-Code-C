/*
Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 3.3

Input 2:
5
Output 2:
Approximate sum: 4.4
*/

#include <stdio.h>

int main() {
    int n, k;
    double sum = 0.0, term;

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    for (k = 1; k <= n; k++) {
        if (k == 1) {
            term = 1.0;
            printf("Term %d: 1\n", k);
        } else {
            double numerator = 2 * k - 1;
            double denominator = 2 * k;
            term = numerator / denominator;
            printf("Term %d: %.0f/%.0f = %.4f\n", k, numerator, denominator, term);
        }
        sum += term;
    }

    printf("\nSum of the series up to %d terms: %.4f\n", n, sum);

    return 0;
}
