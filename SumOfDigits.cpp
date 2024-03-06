#include <iostream>
#include <vector>
#include<string>
#include<cmath>
#define ll long long
#include <algorithm>
using namespace std;
int main()
{
   
       string str;
	 cin>>str;
	 ll counter=0;
	 ll len=str.size();
	while(len>1){
		ll DigitSum=0;
		for(int i=0;i<len;i++){
			DigitSum+=str[i]-'0';
		}
		 str=to_string(DigitSum);
         len=str.size();
         ++counter;
	 }
	 cout<<counter;
    
}