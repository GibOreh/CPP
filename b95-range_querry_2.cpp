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
		b[0]=1;
		for(int i=0; i<n; i++){
			cin>>a[i];
		}
		int l,r;
		cin>>l>>r;
		bool inc=true;
		bool ok= true;
		for(int i=l; i<=r-1; i++){
			if(inc){
				if(a[i]>a[i+1]){
					inc= false;
				}
			} else{
				if(a[i]<a[i+1]){
					ok= false;
				}
			}
		}
		if(ok){
			cout<<"Yes"<<endl;
		} else{
			cout<<"No"<<endl;
		}
	}
}

