#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[n];
		int range[k][2];
		int sum[k];
		
		for(int i=0; i<k; i++){
			sum[i]=0;
		}
		for(int i=0; i<n; i++){
			cin>>a[i];
		}
		
		for(int i=0; i<k; i++){
			for(int j=0; j<2; j++){
				cin>>range[i][j];
			}
		}
		for(int i=0; i<k; i++){
			for(int j= range[i][0]-1; j<=range[i][1]-1; j++){
				sum[i]+= a[j];
			}
		}
		for(int i=0; i<k; i++){
			cout<<sum[i]<<endl;
		}
	}
}
