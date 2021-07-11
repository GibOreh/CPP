#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		if(n==1){
			cout<<a[0]<<endl;
			continue;
		} 
		long long in= a[0]; 
  		long long out= 0; 
  		long long out_; 
  		
  		for (int i= 1; i<n; i++) {
    		out_= (in>out)? in:out;
    		in= out + a[i]; 
    		out= out_; 
  		}
  		if(in>out){
   			cout<<in<<endl;
   		} else{
   			cout<<out<<endl;
		}
	}
}
