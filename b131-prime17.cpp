#include<bits/stdc++.h>
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
		long long l,r;
		cin>>l>>r;
		int sum=0;
		long long index=l;
		while(pow(index,2)<=r){
			if(index==1){
				index++;
				continue;
			}
			if(check(index)){
				sum++;
			}
			index++;
		}
		cout<<sum<<endl;
	}
}
