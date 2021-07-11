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
	while(t--){
		long long n;
		cin>>n;
		if(n==1){
			cout<<1<<endl;
		}
		else if(check(n)){
			cout<<n+1<<endl;
		} else{
			long long sum=0;
			for(long long i=1; i<=sqrt(n); i++){
				if(n%i==0){
					sum=sum+i;
					if(i!=(n/i)){
						sum=sum+(n/i);
					}
					
					
				}
			}
			cout<<sum<<endl;
			
		}
		
	}
}
