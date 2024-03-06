// Online C++ compiler to run C++ program online
#include <iostream>
#include<string>
#include<algorithm>
#include <climits>
#include <cmath>
using namespace std;

int main() {
     double a1,a2,a3,b1,b2,b3;
     cin>>a1>>a2>>a3>>b1>>b2>>b3;
     double res1=0,res2=0;
     res1 = ceil((a1+a2+a3)/5);
     res2 = ceil((b1+b2+b3)/10);
     int n;
     cin>>n;
     if(n>=res1+res2){
         cout<<"YES"<<endl;
     }else{
         cout<<"NO"<<endl;
     }
     
 
    
}