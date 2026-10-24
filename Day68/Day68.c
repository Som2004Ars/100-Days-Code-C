/*
Q118: Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number
*/

#include <stdio.h>

int main() {
    int n, i, sum = 0;
    int arr[1000];

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }

    int total = n * (n + 1) / 2;

    int missing = total - sum;

    printf("Missing number = %d\n", missing);

    return 0;
}
