#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long long a[n];
		int b[n];
		for(int i=0; i<n; i++){
			cin>>a[i];
			b[i]=0;
		}
		
		for(int i=0; i<n; i++){
			for(int j= 0; j<=n; j++){
				if(j<n){
					if(a[j]==i&&b[j]!=1){
					cout<<a[j]<<" ";
					b[j]=1;
					break;
					}
				} else{
					cout<<-1<<" ";
				}
				
			}
		}
		cout<<endl;
	}
}
