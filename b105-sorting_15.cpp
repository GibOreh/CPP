#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k; 
		cin>>n>>k;
		int a[n];
		long long count=0;
	
		for(int i=0; i<n; i++){
			cin>>a[i];
			
		}
		sort(a,a+n);
		for(int i=0; i<n; i++){
			long long m=a[i]+k-1;
			long long j= upper_bound(a+i+1, a+n, m) - a;
			count= count+j-i-1;
		}
		cout<<count<<endl;
	}
}
