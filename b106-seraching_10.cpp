#include<bits/stdc++.h>
using namespace std;

bool check(int n){
	if(n<=1){
		return false;
	} else{
		for(int i=2; i<= sqrt(n); i++){
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
		int n;
		cin>>n;
		bool ok= true;
		for(int i=0; i< (n/2)+1; i++){
			if(check(i) && check(n-i)){
				ok=false;
				cout<<i<<" "<<n-i<<endl;
				break;
			}
		}
		if(ok){
			cout<<-1<<endl;
		}
	}
}
