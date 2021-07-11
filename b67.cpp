#include<iostream>
#include<math.h>
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
	while(t--){
		int n;
		cin>>n;
		int count=0;
		bool ok= false;
		int m=n;
		for(int i=2; i<m; i++){
			if(check(i) && n%i==0){
			
				n=n/i;
				
				count++;
				
				if(count==3){
					ok= true;
					break;
				}
			}
		}
		
		if(n==1&& ok){
			cout<<1<<endl;
		} else{
			cout<<0<<endl;
		}
	}
}
