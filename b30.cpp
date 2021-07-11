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
		int min;
		if(a[1]>a[0]){
			min=a[1]-a[0];
		} else{
			min=a[0]-a[1];
		}
		for(int i=0; i<n-1; i++){
			for(int j=i+1; j<n; j++){
				if(a[i]-a[j]>=0 && a[i]-a[j]<min){
					min=a[i]-a[j];
				} else if(a[j]-a[i]>=0 && a[j]-a[i]<min){
					min=a[j]-a[i];
				}
			}
		}
		cout<<min<<endl;
	}
}
