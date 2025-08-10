#include <bits/stdc++.h>
using namespace std;

void DeleteThreeConsecutiveElements(int A[], int n, int k)
{
    // Check if k is valid
    if (k < 0 || k > n - 3)
    {
        cout << "Invalid index" << endl;
        return;
    }

    int x = k + 3;
    // Shift elements after k+2 to the left
    for (int i = k; i < n; i++)
    {
        A[i] = A[x];
        x++;
    }
}

int main()
{
    int A[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(A) / sizeof(A[0]);
    int k = 3;

    cout << "Before deleted three elements:\n";
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;

    DeleteThreeConsecutiveElements(A, n, k);

    cout << "After deleted three elements:\n";
    n = n - 3;
    // Print the modified array
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }

    cout << endl;

    return 0;
}