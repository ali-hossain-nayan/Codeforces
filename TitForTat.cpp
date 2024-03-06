// Online C++ compiler to run C++ program online
#include <iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;

//const int N=2e6+10;
//int n,t;
//int a[N];

 
 void solve(){
        int n , k ; cin >> n >> k ;
        vector<int> a(n) ;
        for(auto &x : a) cin >> x;

        for(int i = 0 ; i < n - 1 && k; i ++){
            int can_remove = min(a[i], k ) ;
            k -= can_remove ;
            a[i] -= can_remove ;
            a[n-1] += can_remove ;
        }

        for(auto x : a){
            cout << x << " ";
        }
        cout << endl ;
    }


int main()
{
    int t;
    cin>>t;
    while(t--)  solve();
    return 0;
}
