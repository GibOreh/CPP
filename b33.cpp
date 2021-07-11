#include<iostream>
using namespace std;
int main(){
	int t; 
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		int index0=0;
		int index1=0;
		int index2=0;
		for(int i=0; i<n; i++){
			cin>>a[i];
			if(a[i]==0){
				index0++;
			} else if(a[i]==1){
				index1++;
			} else if(a[i]==2){
				index2++;
			}
		}
		for(int i=0; i<index0; i++){
			cout<<0<<" ";
		}
		for(int i=0; i<index1; i++){
			cout<<1<<" ";
		}
		for(int i=0; i<index2; i++){
			cout<<2<<" ";
		}
		cout<<endl;
	}
}
