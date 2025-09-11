#include <stdio.h>
#include <algorithm>

// Function to calculate the maximum possible cost of the coloring
int maxCost(int *a, int n) {
  // Initialize the maximum cost
  int maxCost = 0;

  // Iterate over all elements of the array
  for (int i = 0; i < n; i++) {
    // Initialize the minimum and maximum values of the current color
    int minValue = a[i];
    int maxValue = a[i];

    // Iterate over all remaining elements of the array
    for (int j = i + 1; j < n; j++) {
      // Update the minimum and maximum values of the current color
      if (a[j] < minValue) {
        minValue = a[j];
      } else if (a[j] > maxValue) {
        maxValue = a[j];
      }
    }

    // Update the maximum cost
    maxCost = std::max(maxCost, maxValue - minValue);
  }

  // Return the maximum cost
  return maxCost;
}

// Driver code
int main() {
  // Initialize the number of test cases
  int t;
  scanf("%d", &t);

  // Iterate over all test cases
  for (int i = 0; i < t; i++) {
    // Initialize the length of the array
    int n;
    scanf("%d", &n);

    // Initialize the array
    int *a = new int[n];
    for (int j = 0; j < n; j++) {
      scanf("%d", &a[j]);
    }

    // Calculate the maximum possible cost of the coloring
    int maxCost = maxCost(a, n);

    // Print the maximum possible cost
    printf("%d\n", maxCost);

    // Delete the array
    delete[] a;
  }

  return 0;
}
