#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		vector<int> v;
		for(int i=0; i<n; i++){
			cin>>a[i];
		}
		sort(a, a+n);
		v.push_back(a[0]);
		for(int i=1; i<n; i++){
			if(a[i]!=a[i-1]){
				v.push_back(a[i]);
			}
		}
		int range= v.at(v.size()-1) - v.at(0) +1;
		cout<<range-v.size()<<endl;
	}
}
