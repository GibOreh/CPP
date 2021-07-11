#include<bits/stdc++.h>
using namespace std;

int m=1e9+7;

long long Try(long long x,long long k){
	if(k==0){
		return 1;
	} 
	if(k==1){
		return x;
	} 
	if(k%2==0){
		return Try((x*x)%m,k/2)%m;
	} 
	return (x*Try((x*x)%m,k/2)%m)%m;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,x;
		cin>>n>>x;
		int a[n];
		for(int i=0; i<n; i++){
			cin>>a[i];
		}
		int k=0;
		long long sum=0;
		for(int i=n-1; i>=0; i--){
			long long temp= Try(x,k);
			sum+=(a[i]*temp);
			k++;
		}
		cout<<sum%m<<endl;
	}
}
