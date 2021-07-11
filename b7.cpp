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
			int m=0;
			while (n%j == 0) {
            	n= n/j;
            	m++;
            	if(m==1){
            		cout<<j;
				}
			}
			if(m>0){
    		cout<<" "<<m<<" ";
		}
        }
    	
    	if(n>1){
        	cout<<n<<" "<<1;
		}
		cout<<endl;
	}
}
