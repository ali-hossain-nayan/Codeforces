// Online C++ compiler to run C++ program online
#include <iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<cmath>
using namespace std;

//const int N=2e6+10;
//int n,t;
//int a[N];

 


int main()
{
    int ab, bc, ca;
    cin >> ab >> bc >> ca;
    int a = sqrt(ab * ca / bc + 0.5);
    int b = sqrt(bc * ab / ca + 0.5);
    int c = sqrt(ca * bc / ab + 0.5);
    cout << (a + b + c) * 4 << endl;
    return 0;
}
