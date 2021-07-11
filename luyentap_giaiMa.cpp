#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		vector<char> v;
		for(int i=0; i<s.length(); i+=2){
			for(int j=0; j< (s[i+1]-'0'); j++){
				v.push_back(s[i]);
			}
		}
		for(int i=0; i< v.size(); i++){
			cout<<v.at(i);
		}
		cout<<endl;
	}
}
