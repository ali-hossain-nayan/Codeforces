#include<iostream>
#include<vector>
#define ll long long
#include <algorithm>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n,m,sum = 0;
        cin>>n>>m;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
            sum += v[i];
        }
        if(sum == m){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
     
    }
}