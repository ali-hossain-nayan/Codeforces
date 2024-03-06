// Online C++ compiler to run C++ program online
#include <iostream>
#include<string>
#include<algorithm>
#include <climits>
#include <cmath>
using namespace std;

int main() {
   
    long long n, m = 0, a;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a;
        if(i == 0){
            cout<<a<<" ";
            m = a;
        }
        else{
            cout<<a+m<<" ";
            m = max(m,(a+m));
        }
    }
    cout<<endl;
    }
   
     
 
    
