#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
#define all(x) x.begin(), x.end()

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int ans = 1;
        for (int i = 0; i < m; i++)
        {
            ans = ans & a[i];
        }
        if (ans == 0)
        {
            cout << "0" << endl;
        }
        else
        {
            for (int i = m; i < n; i++)
            {
                ans = ans & a[i];
            }
            if (ans == 0)
            {
                cout << k << endl;
            }
            else
            {
                cout << "100" << endl;
            }
        }
    }
    return 0;
}
