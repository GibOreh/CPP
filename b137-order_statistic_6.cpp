#include<bits/stdc++.h>
using namespace std;

// chua accept

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
		int result= -1;
		for(int i=0; i<n; i++){
			for(int j=n-1; j>=i; j--){
				if(a[j]>a[i] && result<(j-i)){
					result= j-i;
				}
			}
		}
		cout<<result<<endl;
	}
}
