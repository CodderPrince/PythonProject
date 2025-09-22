#include <iostream>
#include <vector>
#include <string>
#include <deque>

#define ll long long

int product_mod(const std::deque<int> &a, int m)
{
    int prod = 1;
    for (int x : a)
    {
        prod = (prod * x) % m;
    }
    return prod;
}

void process_commands(std::deque<int> &a, int m, const std::string &s)
{
    for (char c : s)
    {
        std::cout << product_mod(a, m) << " ";

        if (c == 'L')
        {
            a.pop_front();
        }
        else
        {
            a.pop_back();
        }
    }
    std::cout << "\n";
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int t;
    std::cin >> t;
    while (t--)
    {
        int n, m;
        std::cin >> n >> m;
        std::deque<int> a(n);
        for (int i = 0; i < n; i++)
        {
            std::cin >> a[i];
        }
        std::string s;
        std::cin >> s;

        process_commands(a, m, s);
    }
    return 0;
}
optimize this code but check output not changed