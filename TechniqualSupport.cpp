// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <algorithm>
#include<string>

using namespace std;

int main() {
    
   int tt;
   cin>>tt;
   while(tt--){
         int n;
         cin>>n;
    string str;
   cin>>str;
    int count1=0,count2=0;
    for(int i=0;i<n;i++){
        
        if(str[i]=='Q'){
            count1++;
        }
        else{
            count1--;
        }
        if (count1 <= 0)
        {
            count2 = 0;
            count1 = 0;
        }
   }
    if(count1==0){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }

   
}
}