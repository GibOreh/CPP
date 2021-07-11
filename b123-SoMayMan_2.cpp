#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int sum= 0;
		for(int i=0; i<s.length(); i++){
			sum= sum+ (s[i]-'0');
		}
		while(sum>9){
			string str= to_string(sum);
			sum=0;
			for(int i=0; i<str.length(); i++){
				sum= sum+ (str[i]-'0');
			}
		}
		if(sum==9){
			cout<<1<<endl;
		} else{
			cout<<0<<endl;
		}
	}
}
