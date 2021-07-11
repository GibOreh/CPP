#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		for(int i=0; i<s.length(); i++){
			int c=s[i];
			if(11){
				cout<<"TAB"<<" ";
			} else if(c==32){
				cout<<"SPACE"<<" ";
			} else if(13){
				cout<<"ENTER"<<" ";
			}
		}
	}
}
