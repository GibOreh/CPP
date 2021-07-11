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
		long long max=-1000001;
		long long sum=0;
		for(int i=0; i<n; i++){
			sum= sum+a[i];
			if(max<sum){
				max=sum;
			}
			if(sum<0){
				sum=0;
			}
		}
		cout<<max<<endl;
	}
}

