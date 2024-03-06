#include<iostream>
#include<vector>
#define ll long long
#include <algorithm>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        ll n,m;
        cin>>n>>m;
        ll result = (m*(m+1))/2;
        for(ll i=2;i<=n;i++){
            result += (i-1)*m + m;
        }
        cout<<result<<endl;
      


    }
    }