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
		int dem=0;
		vector<int> v;
		for(int i=0; i<n-1; i++){
			if(a[i]==0){
				dem++;
			} else if(a[i]==a[i+1]){
				a[i]= a[i]*2;
				v.push_back(a[i]);
				a[i+1]=0;
			} else{
				v.push_back(a[i]);
			}
		}
		if(a[n-1]==0){
			dem++;
		} else{
			v.push_back(a[n-1]);
		}
		for(int i=0; i<v.size(); i++){
			cout<<v.at(i)<<" ";
		}
		for(int i=0; i<dem; i++){
			cout<<0<<" ";
		}
		cout<<endl;
	}
}
