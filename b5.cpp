#include<iostream>
#include<cmath>
using namespace std;

bool check(long long n){
	if(n<=1){
		return false;
	} else{
		for(int i= 2; i<= sqrt(n); i++){
			if(n%i==0){
				return false;
			}
		}
	}
	return true;
}

int main(){
	int t;
	cin>>t;
	for(int i= 0; i<t; i++){
		long long n;
		cin>>n;
		if(check(n)){
			cout<<n;
		} else{
			for(long long j=(n/2)+1; j>=2; j--){
				if(n%j==0){
					cout<<j;
				}
			}
		}
		cout<<endl;
	}
}
