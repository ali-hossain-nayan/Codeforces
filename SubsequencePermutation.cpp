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
       long long n,count = 0;
       cin>>n;
       string str;
       cin>>str;
       string temp = str;
       sort(temp.begin(),temp.end());
       int size = temp.size();
       for(int i=0;i<size;i++){
           if(str[i] != temp[i]){
               count++;
           }
       }
       cout<<count<<endl;
       
    }
    }
   
     
 
    
