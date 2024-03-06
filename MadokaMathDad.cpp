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
        ll n, i;
        cin >> n;
        if (n % 3 == 0 || n % 3 == 2)
        {
            i = 2;
            while (n > 0)
            {

                cout << i;
                n = n - i;
                i = 3 - i;
            }
        }
        else
        {
            i = 1;
            while (n > 0)
            {

                cout << i;
                n = n - i;
                i = 3 - i;
            }
        }
        cout << endl;
    }
}