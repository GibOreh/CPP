#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	
	while(t--){
		long long n;
		cin>>n;
		
		if(n==0 || n==1 || n==2 || n==3){
			cout<<"YES"<<endl;
		} else{
			long long a=0;
			long long a1=1; 
			long long a2=1;
			bool ok= false;
			while(a<=n){
				a= (a1+ a2);
        		a1= a2;
        		a2= a;
        		if(a==n){
        			ok= true;
				}
			}
			if(ok){
				cout<<"YES"<<endl;
			} else{
				cout<<"NO"<<endl;
			}
		}
	}
}
