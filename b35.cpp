#include<iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		long long a[n];
		long long b[m];
		long long max,min;
		long long result;
		for(int i=0; i<n; i++){
			cin>>a[i];
			if(i==0){
				max=a[i];
			} else {
				if(max<a[i]){
					max= a[i];
				}
			}
		}
		for(int i=0; i<m; i++){
			cin>>b[i];
			if(i==0){
				min=b[i];
			} else{
				if(min>b[i]){
					min=b[i];
				}
			}
		}
		result= max*min;
		cout<<result<<endl;
		
	}
}
