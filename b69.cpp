#include<iostream>
#include<cmath>

using namespace std;

bool check(long long n){
	if(n<=1){
		return false;
	} else{
		for(long long i= 2; i<= sqrt(n); i++){
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
		int count= 0;
//		for(long long i=0;i<sqrt(n)+1; i++){
//			if(check(i)){
//				count++;
//			}
//		}
		long long index=1;
		while(true){
			if(index*index>n){
				break;
			}
			if(check(index)){
				count++;
			}
			index++;
		}
		cout<<count<<endl;
	}
}
