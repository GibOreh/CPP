#include<bits/stdc++.h>
using namespace std;
 
int main(){
	int t;
	cin>>t;
	while(t--){
		string x1,x2;
		cin>>x1>>x2;
		
		for(long long i=0; i<x1.length(); i++){
			if(x1[i]=='5'){
				x1[i]='6';
			}
		}
		
		for(long long i=0; i<x2.length(); i++){
			if(x2[i]=='5'){
				x2[i]='6';
			}
		}
		
		long long max= stoll(x1) + stoll(x2);
		
		for(long long i=0; i<x1.length(); i++){
			if(x1[i]=='6'){
				x1[i]='5';
			}
		}
		
		for(long long i=0; i<x2.length(); i++){
			if(x2[i]=='6'){
				x2[i]='5';
			}
		}
		
		long long min= stoll(x1) + stoll(x2);
		
		cout<<min<<" "<<max<<endl;
	}
}

