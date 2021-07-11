#include<iostream>
#include<cmath>
using namespace std;


int main(){
	int t;
	cin>>t;
	for(int i= 0; i<t; i++){
		long long n;
		cin>>n;
		for(long long j=2;j<=sqrt(n);j++){
				while (n%j == 0) {
            	cout<<j<<" ";
            	n= n/j;
				}
        	}
        if(n>1){
        	cout<<n;
		}
		cout<<endl;
	}
}
