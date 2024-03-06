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
        ll p, a, b, c;
        cin >> p >> a >> b >> c;
        ll w1, w2, w3;
        w1 = p % a;
        w2 = p % b;
        w3 = p % c;
        ll ot1, ot2, ot3;
        ot1 = a - w1;
        ot2 = b - w2;
        ot3 = c - w3;
        if (w1 == 0 || w2 == 0 || w3 == 0)
        {
            cout << "0" << endl;
        }
        else
        {
            ll mini = min(ot1, min(ot2, ot3));
            cout << mini << endl;
        }
    }
}