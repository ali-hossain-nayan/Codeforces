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
        ll n;
        cin >> n;
        ll sum = n * (n + 1) / 2;
        ll i = 1;
        while (n >= i)
        {
            sum -= (2 * i);
            i *= 2;
        }

        cout << sum << endl;
    }
}