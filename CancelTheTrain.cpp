// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

int main() {
    
   int tt;
   cin>>tt;
   while(tt--){
       int n,m,count = 0;
       int arr[100],brr[100];
       cin>>n>>m;
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        for(int i=0; i<m; i++){
            cin>>brr[i];
        }
      
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(arr[i] == brr[j]){
                    count++;
                }
            }
        }
        cout<<count<<endl;
   }

    return 0;
}