/********************************************************
 *..........Bismillahir Rahmanir Raheem.................
 *------------------------------------------------------
 * Name:  MD. AN NAHIAN PRINCE
 * University: BEGUM ROKEYA UNIVERSITY, RANGPUR
 * Department: COMPUTER SCIENCE AND ENGINEERING
 * Email: annahian44@gmail.com
 *------------------------------------------------------
 ********************************************************/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define mp make_pair
#define F first
#define S second

#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define ROF(i, a, b) for (int i = (a); i > (b); i--)
#define F0R(i, n) FOR(i, 0, n)
#define ROF0R(i, n) ROF(i, n, 0)
#define EACH(x, a) for (auto &x : a)

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define ld long double

#define mod 1000000007            // 1e9 + 7
#define PI 3.14159265358979323846 // acos(-1)
#define endl "\n"

typedef vector<int> vi;
typedef pair<int, int> pii;

// Additional Macros and Constants
#define sz(v) (int)v.size()
#define INF 1000000000

// Additional Data Structures
typedef vector<pii> vpii;
typedef vector<ll> vll;
typedef set<int> si;
typedef unordered_set<int> usi;
typedef map<int, int> mi;
typedef unordered_map<int, int> umi;

/****CREATE NEW FUNCTION HERE****/

/****MAIN FUNCTION IS HERE****/

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k,x,sum=0,odd=0;
        cin >> n >> x;
        vector<ll> arr(n);
        for(auto &a: arr)
        {
            cin>>a;
            if(a%2==1)
            {
                odd++;
            }
        }

        if(odd>=1 && !(x==n && odd%2==0) && !(odd==n && x%2==0))
        {
            cout<<"Yes\n";
        }
        else
        {
            cout<<"No\n";
        }


        /*vector<ll>elements;
        for(int i=0; i<k; i++)
        {
            if(arr[i]%2==1)
            {
                elements.push_back(arr[i]);
            }
        }

        for(int i=0;i<elements.size(); i++)
        {
            sum+=elements[i];
        }

        if(sum%2==0)
        {
            cout<<"No\n";
        }
        else
        {
            cout<<"Yes\n";
        }*/
        /*
                ll sum = 0, even = 0, odd = 0;
                for (int i = 0; i < n; i++)
                {
                    cin >> x;
                    sum += x;
                    if (x % 2 == 1)
                    {
                        odd++;
                    }
                    else
                    {
                        even++;
                    }
                }
        */
        /*
                // base case
                if (odd == 0)
                {
                    cout << "No\n";
                }
                if (n == k)
                {
                    if (sum % 2 == 1)
                    {
                        cout << "Yes\n";
                    }
                    else
                    {
                        cout << "No\n";
                    }
                }
                else
                {
                    if (even == 1)
                    {
                        cout << "Yes\n";
                    }
                    else
                    {
                        if (n % 2 == 1)
                        {
                            cout << "Yes" << endl;
                        }
                        else
                        {
                            cout << "No" << endl;
                        }
                    }
                }*/

        /*if (even == 1 && odd == 0)
        {
            cout << "No\n";
        }

        else if (even == 1 && odd == 1)
        {
            cout << "Yes\n";
        }*/

        /*for (int i = 0; i < n; i++)
        {

            if (n > k)
            {
                if (k == 1)
                {
                    if (arr[i] % 2 == 1)
                    {
                        sum += arr[i];
                    }
                }
                // else if()
                for (int j = 0; j < k; j++)
                {
                    sum+=arr[j];
                }
            }

                if(x == n){
            if(sum % 2 == 1){
                cout<<"Yes"<<endl;
            }else{
                cout<<"No"<<endl;
            }
        }else{
            if(even){
                cout<<"Yes"<<endl;
            }else{
                if(x % 2 == 1){
                    cout<<"Yes"<<endl;
                }else{
                    cout<<"No"<<endl;

            else
            {
                sum += arr[i];
            }
        }*/

        // cout<<sum<<nl;
        /* if (sum % 2 == 1)
         {
             cout << "Yes\n";
         }
         else
         {
             cout << "No\n";
         }*/
    }
        return 0;
    }