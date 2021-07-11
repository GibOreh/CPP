#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		long long a;
		string b;
		cin>>a>>b;
		long long temp= 0;
		for(int i=0; i<b.length(); i++){
			temp= (temp*10 + (b[i]-'0'))%a;
		}
		cout<<__gcd(a,temp)<<endl;
	}
}
