// Online C++ compiler to run C++ program online
#include <iostream>
#include<algorithm>
using namespace std;

int main() {
    long long n,serve= 0,people=0;
    cin>>n;
    long long arr[200000];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        if(arr[i]>=serve){
            serve += arr[i];
            people++;
        }
    }
    cout<<people<<endl;
    
    return 0;
}