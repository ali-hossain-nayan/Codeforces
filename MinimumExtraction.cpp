// Online C++ compiler to run C++ program online
#include <iostream>
#include<algorithm>
#include<string>
using namespace std;

const int N=2e6+10;
int n,t;
int a[N];

void solve()
{
    
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];

    sort(a+1,a+1+n);

    int pre_add=0,max_1=-0x3f3f3f3f;
    for(int i=1;i<=n;i++)
    {
        a[i]-=pre_add;
        max_1=max(max_1,a[i]);
        pre_add+=a[i];
    }
   cout<<max_1<<endl;
}
int main()
{
    cin>>t;
    while(t--)  solve();
    return 0;
}
