#include<bits/stdc++.h>
using namespace std;

int m=1e9+7;
long long Try(long long hx,long long gx){
	if(gx==1) return hx;
	if(gx%2==0) return Try((hx*hx)%m,gx/2)%m;
	return (hx*(Try((hx*hx)%m,gx/2)%m))%m;
}
int main(){
	
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		int a[n];
		cin>>a[0];
		int gx;
		gx=a[0];
		for(int i=1; i<n; i++){
			cin>>a[i];
			gx=__gcd(a[i],gx);
		}

		long long hx=1;
		for(int i=0; i<n; i++){
			hx= (hx*a[i])%m;
		}
		
		cout<<Try(hx%m,gx%m)<<endl;
	}
}

