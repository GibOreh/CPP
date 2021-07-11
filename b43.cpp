#include<iostream>
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
		int indexI=0;
		int indexJ=1;
		long long min=(a[0]+a[1])*(a[0]+a[1]);
		for(int i=0; i<n-1; i++){
			for(int j=i+1; j<n; j++){
//				cout<<a[i]<<" "<<a[j]<<" = ";
//				cout<<(a[i]+a[j])*(a[i]+a[j])<<endl;
				if((a[i]+a[j])*(a[i]+a[j]) < min){
					min=(a[i]+a[j])*(a[i]+a[j]);
					indexI=i;
					indexJ=j;
				}
				
			}
		}
		cout<<a[indexI]+a[indexJ]<<endl;
	}
}
