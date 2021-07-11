#include<bits/stdc++.h>
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
		int max= 0;
		sort(a, a+n);
		int count= 1;
		int result= a[0];
	
		for(int i=1; i<n; i++){
			if(a[i]==a[i-1]){
				count++;
				if(i== n-1){
					if(max<count){
						max= count;
						result= a[i];
					}
				}
			} else{
				if(max<count){
					max= count;
					result= a[i-1];
				}
				count= 1;
			}
		}
		if(max<=(n/2)){
			cout<<"NO"<<endl;
			continue;
		}
		cout<<result<<endl;
	}
}
