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

		int result= 0;
		for(int i=0; i<n; i++){
			for(int j=0; j<i; j++){
				if(a[j]<a[i]){
					if(b[i]<(b[j]+a[i])){
						b[i]= b[j]+a[i];
					}
				}
			}
			if(result<b[i]){
				result= b[i];
			}
		}
		cout<<result<<endl;	
	}
}
