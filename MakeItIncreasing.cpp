#include<iostream>
#include<vector>
#define ll long long
#include <algorithm>
using namespace std;
int main(){
    ll tt;
    cin>>tt;
    while(tt--){
      ll n,count = 0;
      cin>>n;
      vector<int>v(n);
      for(ll i=0;i<n;i++){
        cin>>v[i];
      }
      bool ok = false;
      for(ll i=n-2;i>=0;i--){
        if(v[i+1] == 0){
            ok = true;
            break;
        }
        while (v[i]>=v[i+1])
        {
            v[i] /= 2;
            count++;
        }
        
      }
      if(ok){
        cout<<"-1"<<endl;
      }else{
        cout<<count;
      }cout<<endl;

    }
    }