#include<iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		int max;
		for(int i=0; i<n; i++){
			cin>>a[i];
			if(i==0){
				max=a[i];
			} else{
				if(max<a[i]){
					max=a[i];
				}
			}
		}
		cout<<max<<endl;
		
	}
}
