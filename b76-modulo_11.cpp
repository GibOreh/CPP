#include<bits/stdc++.h>
using namespace std;

long long Try(long long a,long long b,long long c){
	if(b==0||a==0){
		return 0;
	} 
	if(a==1){
		return b%c;
	} else if(b==1){
		return a%c;
	} else{
		a%=c;
		b%=c;
		if(b%2==0){
			return Try(a*2,b/2,c);
		} 
	}
	return (a+Try(a*2,b/2,c))%c;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long a,b,c;
		cin>>a>>b>>c;
		long long result= Try(a, b, c);
		cout<<result<<endl;
	}
}
