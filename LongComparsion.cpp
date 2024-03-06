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
        string str1, str2;
        ll x, p;
        cin >> str1 >> x;
        cin >> str2 >> p;
        while (str1[str1.size() - 1] == '0')
        {
            x++;
            str1.pop_back();
        }
        while (str2[str2.size() - 1] == '0')
        {
            p++;
            str2.pop_back();
        }

        if (str1 == str2)
        {
            if (x == p)
            {
                cout << "=" << endl;
            }
            else if (x > p)
            {
                cout << ">" << endl;
            }
            else
            {
                cout << "<" << endl;
            }
        }
        else
        {
            int x1 = str1.size() + x;
            int y1 = str2.size() + p;
            if (x1 == y1)
            {
                if (str1 > str2)
                {
                    cout << ">" << endl;
                }
                else
                {
                    cout << "<" << endl;
                }
            }
            else if (x1 > y1)
            {
                cout << ">" << endl;
            }
            else
            {
                cout << "<" << endl;
            }
        }
    }
}