#include<iostream>
using namespace std;
long long lcm(long long a, long long b){

	if(a>b){
		for(int i= 1; i<=b; i++){
			if((a*i)%b==0){
				return a*i;
			}
		}
	} else{
		for(int i= 1; i<=b; i++){
			if((b*i)%a==0){
				return b*i;
			}
		}
	}
	
}
int main(){
	int t;
	cin>>t;
	for(int i=0; i<t; i++){
		int n;
		cin>>n;
		long long bcnn=1;
		for(int j= 1; j<=n; j++){
			bcnn= lcm(bcnn, j);
		}
		cout<<bcnn<<endl;
	}
}
