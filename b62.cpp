#include<iostream>
#include<string>
#include<algorithm>
#include <sstream>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		long long a,x,y;
		cin>>a>>x>>y;
		long long gcd= __gcd(x,y);
		for(int i=0; i<gcd; i++){
			cout<<a;
		}
		cout<<endl;
	}
}
