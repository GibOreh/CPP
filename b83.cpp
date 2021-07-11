#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0; i<n; i++){
			cin>>a[i];
		}
		sort(a, a+n);
		vector<int> v1,v2;
		
		if(n%2==0){
			for(int i=0; i<n/2; i++){
				v1.push_back(a[i]);
			}
			for(int i=(n/2); i<n; i++){
				v2.push_back(a[i]);
			}
			for(int i=0; i<v1.size(); i++){
				cout<<v2.at(v2.size()-1-i)<<" "<<v1.at(i)<<" ";
			}
		} else{
			for(int i=0; i<n/2; i++){
				v1.push_back(a[i]);
			}
			for(int i=(n/2); i<n; i++){
				v2.push_back(a[i]);
			}
			for(int i=0; i<v2.size()-1; i++){
				cout<<v2.at(v2.size()-1-i)<<" "<<v1.at(i)<<" ";
			}
			cout<<v2.at(0);
			
		}
		
		cout<<endl;
		
	}
}
