#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; 
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		if(n==1){
			cout<<1<<endl;
			break;
		}
		int a[n];
		for(int i=0; i<n; i++){
			cin>>a[i];
	
		}
		vector<long long> v;
		for(int i=1; i<n-1; i++){
			int result= a[i-1] * a[i+1];
			v.push_back(result);
		} 
		cout<<a[0]*a[1]<<" ";
		for(int i=0; i<v.size(); i++){
			cout<<v.at(i)<<" ";
		}
		cout<<a[n-1]*a[n-2]<<endl;
	}
}
