#include <bits/stdc++.h> 
using namespace std; 

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n], b[n];
		for(int i=0; i<n; i++){
			cin>>a[i];
		}
		for(int i=0; i<n; i++){
			cin>>b[i];
		}
		
		int max=0;
		
		for(int i=0; i<n; i++){
			int sumA=0;
			int sumB=0;
			for(int j=i; j<n; j++){
				sumA= sumA+a[j];
				sumB= sumB+b[j];
				if(sumA==sumB && (j-i+1)>max){
					max= j-i+1;
				}
			}
		}
		cout<<max<<endl;
	}
}
