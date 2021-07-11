#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[n];
		float max;
		int sum=0;
		int index;
		for(int i=0; i<n; i++){
			cin>>a[i];
		}
		for(int i=0; i<k; i++){
			sum= sum+a[i];
		}
		max= sum;
		index=k-1;
		for(int i=k; i<n; i++){
			sum= sum+a[i]-a[i-k];
			if(sum>max){
				
				max= sum;
				index=i;
			}
		}
		for(int i=index-k+1; i<=index; i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
		
	}
}
