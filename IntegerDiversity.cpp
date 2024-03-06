#include <iostream>
#include <set>
#include <map>
using namespace std;

int main() {
    int tt;
    cin>>tt;
    while(tt--){
 
        int n;
        cin>>n;
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            if(x<0){
                x=-x;
                
            }
             mp[x]++;
           
        }
        int res=0;
        for(auto it:mp)
        {
            if(it.first==0){
                res+=1;
            }
            else if(it.second>=2){
                res+=2;
            }
            else {
                res+=1;
            }
        }
        cout<<res<<endl;
    
	
   
}
 return 0;
}