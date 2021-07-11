#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string a;
		cin>>a;
		long long b;
		long long m;
		cin>>b>>m;
		
		long long temp= 0;
		for(int i=0; i<a.length(); i++){
			temp= (temp*10 + a[i] - '0')%m;
			temp= temp%m;
		}
		
		long long result= 1;
		
		while(b){
			if(b%2 ==1){
				result= (result*temp)%m;
			}
			b= b/2;
			temp= (temp*temp)%m;
		}
		cout<<result<<endl;
	}

}
