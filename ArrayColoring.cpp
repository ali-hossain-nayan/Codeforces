// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int tt;
    cin>>tt;
    while(tt--){
        int n,sum = 0;
        cin>>n;
        int arr[1000];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum += arr[i];
        }
        if (sum%2==0){
            cout<<"yES"<<endl;
        
        }else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}