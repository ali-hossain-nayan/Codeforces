#include <iostream>
#include <vector>
#include <cmath>
#include <set>
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
        float AreaSquare = 0;
        cin >> n;
        vector<float> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        set<float> stt;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                AreaSquare = abs(v[j] - v[i]);
                if (AreaSquare != 0)
                {
                    stt.insert(AreaSquare);
                }
            }
        }
        cout << stt.size() << endl;
    }
}