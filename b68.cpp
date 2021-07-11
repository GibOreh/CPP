#include<iostream>
#include<math.h>
using namespace std;

//bool check(long long n){
//	if(n<=1){
//		return false;
//	} else{
//		for(long long i= 2; i<= sqrt(n); i++){
//			if(n%i==0){
//				return false;
//			}
//		}
//	}
//	return true;
//}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		cout<<1<<" ";
		for(long long i=2; i<=n; i++){
			bool ok= true;
			for(long long j=2;j<=sqrt(i);j++){
				if (i%j == 0) {
            		cout<<j<<" ";
            		ok= false;
            		break;
				}
        	}
        	if(ok){
        		cout<<i<<" ";
			}
		}
		cout<<endl;
	}
}
