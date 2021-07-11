#include<iostream>
#include<cmath>
using namespace std;

bool check(int n){
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
	for(int i=0; i<t; i++){
		int n;
		cin>>n;
		for(int j=2; j<=n; j++){
			if(check(j)){
				cout<<j;
			}
		}
		cout<<endl;
	}
}
