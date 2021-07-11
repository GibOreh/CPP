#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		long long a,b;
		cin>>a>>b;
		long long sum= a*(a+1)/2;
		long long num1= (sum+b)/2;
		long long num2= sum-num1;
		if(num1*2 != (sum+b)){
			cout<<"No"<<endl;
			continue;
		}
		if(__gcd(num1, num2)==1){
			cout<<"Yes"<<endl;
			continue;
		}
		cout<<"No"<<endl;
	}
}
