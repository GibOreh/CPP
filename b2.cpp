#include<iostream>
using namespace std;

long long gcd(long long a, long long b){
	if(a==0 || b==0){
		return a+b;
	} else{
		while(a!= b){
			if(a>b){
				a= a-b;
			} else {
				b= b-a;
			}
		}
	}
	return a;
}

long long lcm(long long a, long long b){

	if(a>b){
		for(int i= 1; i<=b; i++){
			if((a*i)%b==0){
				return a*i;
			}
		}
	} else{
		for(int i= 1; i<=b; i++){
			if((b*i)%a==0){
				return b*i;
			}
		}
	}
	
}

 int main(){
 	int t; 
 	cin>>t;
 	for(int i= 0; i<t; i++){
 		long long a,b;
 		cin>>a>>b;
 		cout<<lcm(a,b)<<" "<<gcd(a,b)<<endl;
	 }
 }
