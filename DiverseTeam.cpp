// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;
int v[101];
int main() {
    
   int n, k;
	cin >> n >> k;
	vector<int>vec;

	for (int i = 1; i <= n; i++) {
		int x; cin >> x;

		if (!v[x])vec.push_back(i);
		v[x]++;
	}
	if (vec.size() < k)cout << "NO"<<endl;
	else {
		cout << "YES"<<endl;
		for (int i = 0; i < k; i++)cout << vec[i] << " ";
	}

    return 0;
}