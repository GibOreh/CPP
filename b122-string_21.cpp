#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		vector<char> vChar;
		int sum=0;
		for(int i=0; i<s.length(); i++){
			if(s[i]>= 'A' && s[i]<= 'Z'){
				vChar.push_back(s[i]);
			} else{
				sum= sum+ (s[i] - '0');
			}
		}
		sort(vChar.begin(), vChar.end());
		for(int i=0; i<vChar.size(); i++){
			cout<<vChar.at(i);
		}
		cout<<sum<<endl;
	}
}
