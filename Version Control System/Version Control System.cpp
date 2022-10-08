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
        int a[m];
        for (int i = 0; i < m; i++)
        {
            cin >> a[i];
        }
        int b[k];
        for (int i = 0; i < k; i++)
        {
            cin >> b[i];
        }
        // we need to find the intersection of two array and the element of the parent array which is not present
        set<int> s;
        for (int i = 0; i < k; i++)
        {
            s.insert(b[i]);
        }
        int count = 0;
        for (int i = 0; i < m; i++)
        {
            if (s.count(a[i]) == 1)
            {
                count++;
            }
            else
                s.insert(a[i]);
        }
        // now count have the intersection
        int cnt = 0;
        for (int i = 1; i <= n; i++)
        {
            if (s.count(i) == 0)
            {
                cnt++;
            }
        }

        cout << count << " " << cnt << endl;
    }
    return 0;
}
