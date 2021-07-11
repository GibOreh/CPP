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

int sumString(int n){
	string s= to_string(n);
	int sum=0;
	for(int i=0; i<s.length(); i++){
		sum= sum+ s[i] - '0';
	}
	return sum;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		if(check(n)){
			cout<<"NO"<<endl;
			continue;
		}
		int sum1= sumString(n); 
		int sum2=0;
		while(n!=1){
			for(int i=2; i<=n; i++){
				if(check(i) && n%i==0){
					sum2= sum2 + sumString(i);
					n=n/i;
					break;
				}
			}
			
		}
		if(sum1==sum2){
			cout<<"YES"<<endl;
		} else{
			cout<<"NO"<<endl;
		}
	}
}
