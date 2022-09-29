#include <bits/stdc++.h>
using namespace std;
//-5 1 -1 2 -2 3
int main()
{
    int t;
    cin >> t;
    // same type same colour odd number
    while (t--)
    {
        long long int n;
        cin >> n;
        if (n % 4 != 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            vector<long long int> A;
            vector<long long int> B;
            for (int i = 1; i <= n / 4; i++)
            {
                A.push_back(i);
            }
            for (int i = 1 + (n / 4); i <= 3 * n / 4; i++)
            {
                B.push_back(i);
            }
            for (int i = 1 + (3 * n / 4); i <= n; i++)
            {
                A.push_back(i);
            }
            sort(A.begin(), A.end());
            sort(B.begin(), B.end(), greater<long long int>());
            // reverse(B.begin() B.end());
            cout << "YES" << endl;
            for (int i = 0; i < A.size(); i++)
            {
                cout << A[i] << " ";
            }
            cout << endl;
            for (int i = 0; i < B.size(); i++)
            {
                cout << B[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
