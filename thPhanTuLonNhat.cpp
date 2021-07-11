#include<bits/stdc++.h>
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
		for(int i=v.size()-1; i>= v.size()-k; i--){
			cout<<v.at(i)<<" ";
		}
		cout<<endl;		
	}
	
}
