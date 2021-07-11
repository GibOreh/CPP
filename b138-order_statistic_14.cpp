#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		int b[n];
		for(int i=0; i<n; i++){
			cin>>a[i];
			b[i]= a[i];
		}
		sort(a, a+n);
		map<int, string> m;
		for(int i=1; i<n; i++){
			if(a[i]!=a[i-1]){
				m[a[i-1]]= to_string(a[i]);
			}
			if(i==n-1){
				m[a[i]]= "_";
			}
		}
		for(int i=0; i<n; i++){
			cout<<m[b[i]]<<" ";
		}
		cout<<endl;
	}
}
