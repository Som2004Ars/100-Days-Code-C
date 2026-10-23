/*
Q117: Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.
*/

#include <stdio.h>

int main() {
    int m, n, i = 0, j = 0, k = 0;
    int a[1000], b[1000], c[2000];

    printf("Enter size of first array: ");
    scanf("%d", &m);

    printf("Enter first sorted array: ");
    for (i = 0; i < m; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &n);

    printf("Enter second sorted array: ");
    for (j = 0; j < n; j++) {
        scanf("%d", &b[j]);
    }

    i = 0;
    j = 0;

    // Merge both sorted arrays
    while (i < m && j < n) {
        if (a[i] <= b[j]) {
            c[k] = a[i];
            i++;
        } else {
            c[k] = b[j];
            j++;
        }
        k++;
    }

    // Copy remaining elements of first array
    while (i < m) {
        c[k] = a[i];
        i++;
        k++;
    }

    // Copy remaining elements of second array
    while (j < n) {
        c[k] = b[j];
        j++;
        k++;
    }

    printf("Merged sorted array: ");
    for (i = 0; i < k; i++) {
        printf("%d ", c[i]);
    }

    return 0;
}
