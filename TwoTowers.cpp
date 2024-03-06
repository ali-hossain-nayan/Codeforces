#include <iostream>
#include <vector>
#include<string>
#define ll long long
#include <algorithm>
using namespace std;
int solve(){
    int n,m;
    cin>>n>>m;
    string str1="", str2="";
    string temp="";
    bool ok=true;
    cin>>str1>>str2;
    for(int i=0;i+1<n;i++){
        if(str1[i]==str1[i+1]){
            temp=str1.substr(i+1,n);
            ok=false;
            break;
        }
    }
    if(!ok){
        reverse(temp.begin(),temp.end());
        str2+=temp;
        for(int i=0;i+1<str2.length();i++){
            if(str2[i]==str2[i+1]){
                cout<<"NO"<<endl;
                return 0;
            }
        }
    }
    temp="";
    ok=true;
    for(int i=0;i+1<m;i++){
        if(str2[i]==str2[i+1]){
            temp=str2.substr(i+1,m);
            ok=false;
            break;
        }
    }
    if(!ok){
        reverse(temp.begin(),temp.end());
        str1+=temp;
        for(int i=0;i+1<str1.length();i++){
            if(str1[i]==str1[i+1]){
                cout<<"NO"<<endl;
                return 0;
            }
        }
    }
    cout<<"YES"<<endl;
    return 0;
}
int main()
{
    int tt;
    cin>>tt;
    while(tt--){
        solve();
    }
    return 0;
}