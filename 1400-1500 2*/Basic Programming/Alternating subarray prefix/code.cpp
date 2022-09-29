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
        long long int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        
        long long int sign;
        int arr1[n];
        arr1[n-1]=1;
        for(int i=n-2;i>=0;i--)
        {
            if((arr[i]*arr[i+1])<0)//if negative
            arr1[i]=arr1[i+1]+1;
            else
            arr1[i]=1;
        }
        

        for (int i = 0; i < n; i++)
        {
            cout << arr1[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
