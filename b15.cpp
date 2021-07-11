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
		int start, end;
		cin>>start>>end;
		if(end>start){
			for(int j=start; j<=end; j++){
				if(check(j)){
					cout<<j<<" ";
				}
			}
		} else {
			for(int j=end; j<=start; j++){
				if(check(j)){
					cout<<j<<" ";
				}
			}
		}
		
}
