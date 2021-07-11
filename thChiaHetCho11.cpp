#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		long long a=0;
		long long b=0;
		for(int i=0; i<s.length(); i++){
			if(i%2==1){
				b= b+ s.at(i)-'0';
			} else{
				a= a+ s.at(i)-'0';
			}
		}
		if((b-a)%11==0){
			cout<<1<<endl;
		} else{
			cout<<0<<endl;
		}
	}
}
