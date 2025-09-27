#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N, Q;
    cin >> N >> Q;

    vector<long long> prefixSum(1000000000 + 2, 0);

    for (int i = 0; i < N; ++i)
    {
        int l, r, v;
        cin >> l >> r >> v;
        prefixSum[l] += v;
        prefixSum[r] -= v;
    }

    for (int i = 1; i < prefixSum.size(); ++i)
    {
        prefixSum[i] += prefixSum[i - 1];
    }

    for (int i = 0; i < Q; ++i)
    {
        int l, r;
        cin >> l >> r;
        cout << prefixSum[r] - prefixSum[l] << endl;
    }

    return 0;
}
