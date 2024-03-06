#include <iostream>
#include <vector>
#include <string>
#define ll long long
#include <algorithm>
using namespace std;
int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        ll n, B, x, y;
        cin >> n >> B >> x >> y;
        ll sum = 0, fi = 0;
        for (ll i = 1; i <= n; i++)
        {
            if (fi + x <= B)
            {
                fi = fi + x;
            }
            else
            {
                fi = fi - y;
            }
            sum = sum + fi;
        }
        cout << sum << endl;
    }
}