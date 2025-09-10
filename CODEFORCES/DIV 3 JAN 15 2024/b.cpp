#include <bits\stdc++.h>
#include <string>
using namespace std;

int main()
{

    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {

        int n;
        string s, f;
        cin >> n >> s >> f;

        int ops = 0;

        for (int j = 0; j < n; j++)
        {

            if (s[j] != f[j])
            {

                bool found = false;
                for (int k = j + 1; k < n; k++)
                {
                    if (s[k] != f[k] && s[k] == f[j])
                    {

                        s[k] = f[k];
                        s[j] = f[j];
                        ops++;
                        found = true;
                        break;
                    }
                }

                if (!found)
                {
                    if (f[j] == '1')
                    {

                        s[j] = f[j];
                        ops++;
                    }
                    else
                    {

                        s[j] = f[j];
                        ops++;
                    }
                }
            }
        }

        cout << ops << endl;
    }

    return 0;
}
