#include<iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int index=0;
		long long a[n];
		long long b[n];
		for(int i=0; i<n; i++){
			cin>>a[i];
			b[i]=0;
		}
		for(int i=0; i<n; i++){
			if(a[i]!=0){
				b[index]=a[i];
				index++;
			}
			
		}
		for(int i=0; i<n; i++){
			cout<<b[i]<<" ";
		}
		cout<<endl;
	}
}
