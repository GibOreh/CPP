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
		int min=1;
		while(min){
			bool ok=true;
			for(int i=0; i<n; i++){
				if(a[i]==min){
					ok= false;
				}
			}
			
			if(ok){
				break;	
			} else{
				min++;
			}
		}
		cout<<min<<endl;
	}
}
