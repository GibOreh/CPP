#include<bits/stdc++.h>
using namespace std;
int count_;
void Try(int a[], int n){
	bool ok= true;
	for(int i=0; i<n; i++){
		if(a[i]%2!=0){
			count_++;
			a[i]--;
		}
		if(a[i]!=0){
			ok=false;
		} 
	}
	for(int i=0; i<n; i++){
		a[i]/=2;
	}
	if(ok){
		return;
	} 
	count_++;
	Try(a,n);
}
int main(){
	int t;
	cin>>t;
	while(t--){
		count_=0;
		int n;
		cin>>n;
		int a[n];
		for(int i=0; i<n; i++){
			cin>>a[i];
		}
			
		Try(a,n);
		cout<<count_<<endl;
	}
}
