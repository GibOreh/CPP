#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[n];
		vector<int> v;
		for(int i=0; i<n; i++){
			cin>>a[i];
			v.push_back(a[i]);
		}
		sort(v.begin(), v.end());
		cout<<v.at(k-1)<<endl;
	}
}
