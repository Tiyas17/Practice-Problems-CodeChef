#include <bits/stdc++.h>
using namespace std;
//-5 1 -1 2 -2 3
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int brr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> brr[i];
        }
        sort(arr, arr + n);
        sort(brr, brr + n);
        for (int i = 0; i < n; i++)
        {
            arr[i] = arr[i] + brr[n - 1 - i];
        }
        sort(arr, arr + n);
        cout << arr[n - 1] << endl;
    }
    return 0;
}
