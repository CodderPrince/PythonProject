// prince

#include <bits\stdc++.h>
using namespace std;

double average(double arr[], int n)
{
    double sum = 0;
    int i;
    for (i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    double avg = sum / n;
    return avg;
}

int main()
{
    int n;
    cin >> n;
    double arr[n];
    int i;

    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    double avg = average(arr, n);

    cout << fixed << setprecision(7) << avg << endl;

    return 0;
}
