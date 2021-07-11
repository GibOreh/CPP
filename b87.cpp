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
		if(n==1){
			cout<<a[0]<<endl;
			
		} else{
			long long max=a[0];
			for(int i=0; i<n; i++){
				for(int j=i; j<n; j++){
					long long r=1;
					for(int k=i; k<=j; k++){
						r= r*a[k];
					
					}
					if(r>max){
						max=r;
					}
				}
			}
			cout<<max<<endl;
		}
		
	}
}
