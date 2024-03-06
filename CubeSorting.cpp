#include <iostream>
#include <vector>
#define ll long long
#include <algorithm>
using namespace std;
int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        ll n;
        cin >> n;
       
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int flag = 0;
        for (int i = 1; i < n; i++)
        {
            if (v[i] >= v[i - 1])
            {
               flag = 1;
                break;
            }
        }
        if (flag==1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}