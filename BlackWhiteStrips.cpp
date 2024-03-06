// Online C++ compiler to run C++ program online
#include <iostream>
#include<string>
#include<algorithm>
#include <climits>
#include <cmath>
using namespace std;

int main() {
   
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string str;
        cin>>str;
        int count=0;
        for(int i=0;i<k;i++)
        {
            if(str[i]=='W')count++;
        }
        int res=count;
        for(int i=k;i<n;i++)
        {
            if(str[i]=='W'){
                count++;
            }
            if(str[i-k]=='W'){
                count--;
            }
            res=min(res,count);
        }
        cout<<res<<endl;
    }
    }
   
     
 
    
