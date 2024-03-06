#include <iostream>
#include <vector>
#include<string>
#define ll long long
#include <algorithm>
using namespace std;
int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        string str;
        cin >> str;
        char minii = '9';
        for (ll i = 0; i < str.size(); i++)
        {
            if (i == '0')
            {
                minii = str[0];
            }
            else
            {
                minii = min(minii, str[i]);
            }
        }
        if (str.size() == 2)
        {
            cout << str[1] << endl;
        }
        else
        {
            cout << minii << endl;
        }
    }
}