#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		long long x,y,z,n;
		cin>>x>>y>>z>>n;
		if(n<1){
			cout<<-1<<endl;
			continue;
		}
		long long temp= x*y/__gcd(x,y);
		long long lcm= temp*z/__gcd(temp,z);
		long long a= pow(10,n-1);
		long long b= pow(10,n);
		long long soDu= a%lcm;
		long long soChia= a/lcm;
		long long result;
		if(soDu!=0){
			result= (soChia*lcm)+lcm;
		} else{
			result= soChia*lcm;
		}
		if(result>=a && result<=b){
			cout<<result<<endl;
		} else{
			cout<<-1<<endl;
		}
		
	}
}
