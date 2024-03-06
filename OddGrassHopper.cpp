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
    int tt;
    cin>>tt;
    while(tt--){
        long long n,x,modu,res=0;
                 cin>>x>>n;
                 modu=n%4;
                 if(modu==1){
                      res=-n;
                 }
                
                 else if(modu==2){
                      res=1;
                 }
                
                 else if(modu==3){
                    res=n+1; 
                 }
                 
                 if(x&1){
                      cout<<x-res<<endl;
                 }
                
                 else{
                      cout<<x+res<<endl;
                 }
                
    }
  
}
