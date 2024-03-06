// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

int main() {
   int tt;
   cin>>tt;
   while(tt--){
       int arr[10000];
       int n;
       cin>>n;
       vector< int>vec1,vec2;
       for(int i=0;i<n;i++){
           cin>>arr[i];
           vec2.push_back (arr[i]);
       }
       vec1=vec2;
       sort(vec2.begin(),vec2.end());
       if(vec1==vec2){
           cout<<"NO"<<endl;
       }else{
           cout<<"YES"<<endl;
       }
   }

    return 0;
}