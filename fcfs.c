#include <stdio.h>

void main() {
    int t[20], n, i, tot = 0;
    float avhm;

    // Input number of tracks
    printf("Enter the number of tracks: ");
    scanf("%d", &n);

    // Input the tracks to be traversed
    printf("Enter the tracks to be traversed: ");
    for (i = 0; i < n; i++) {  // Use 0-based indexing
        scanf("%d", &t[i]);
    }

    // Calculate the total head movement and print the differences between tracks
    printf("Tracks traversed\tDifference between tracks\n");
    for (i = 1; i < n; i++) {  // Start from the second track to calculate the difference
        int diff = t[i] - t[i - 1];  // Calculate the difference between consecutive tracks
        if (diff < 0) {
            diff = -diff;  // Take the absolute value of the difference
        }
        tot += diff;  // Add the absolute difference to the total
        printf("%d -> %d\t\t\t%d\n", t[i - 1], t[i], diff);  // Print the track and difference
    }

    // Calculate the average head movement
    avhm = (float)tot / (n - 1);  // Average head movement

    // Output the result
    printf("\nAverage head movement: %.2f\n", avhm);
}
