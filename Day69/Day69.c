/*
Q119: Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.
*/
#include <stdio.h>

int main() {
    int n, i;
    int arr[1000];
    int freq[1001] = {0};

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find repeated element in one traversal
    for (i = 0; i < n; i++) {
        if (freq[arr[i]] == 1) {
            printf("Repeated element = %d\n", arr[i]);
            return 0;
        }

        freq[arr[i]]++;
    }

    return 0;
}
