#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	long long m=1000000007;
	while(t--){
		int n;
		cin>>n;
		if(n==1 || n==2){
			cout<<1<<endl;
		} else{
			int a;
			int a1=1; 
			int a2=1;
			while(n>=3){
				a= (a1+ a2)%m;
        		a1= a2%m;
        		a2= a%m;
        		n--;
			}
			cout<<a<<endl;
		}
	}
}
