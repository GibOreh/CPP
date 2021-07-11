#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int n;
		cin>>n;
		int a[26];
		for(int i=0; i<26; i++){
			a[i]=0;
		}
		for(int i=0; i<s.length(); i++){
			int c= s[i] - 97;
			a[c]= 1;
		}
		int count=0;
		for(int i=0; i<26; i++){
			if(a[i]==0){
				count++;
			}
		}
		if(count<=n){
			cout<<1<<endl;
		} else{
			cout<<0<<endl;
		}
		
	}
}
