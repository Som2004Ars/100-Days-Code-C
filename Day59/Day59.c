/*
Q109: Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.
*/

#include <stdio.h>

int main() {
    int n, k, i;
    scanf("%d", &n);

    int arr[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    if (k <= 0 || k > n) {
        printf("Invalid input");
        return 0;
    }

    int sum = 0;

    for (i = 0; i < k; i++) {
        sum += arr[i];
    }

    int maxSum = sum;

    for (i = k; i < n; i++) {
        sum = sum - arr[i - k] + arr[i];

        if (sum > maxSum) {
            maxSum = sum;
        }
    }

    printf("%d\n", maxSum);

    return 0;
