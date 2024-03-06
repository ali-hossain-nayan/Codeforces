// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
   long long t;
   cin>>t;
   while(t--){
       long long n,sum= 0,a,b,count = 0;
       cin>>n;
       long long arr[200000];
       for(int i=0;i<n;i++){
           cin>>arr[i];
           sum += arr[i];
       }
       a = sum/n;
       b = sum%n;
       for(int i=0;i<n;i++){
           arr[i] = a;
       }
       for(int i=0;i<n;i++){
           if(arr[i]==0){
               count++;
           }
       }
       cout<<(n-b)*b<<endl;
       
   }

    return 0;
}