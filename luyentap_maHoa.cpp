#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		if(s.length()==1){
			cout<<s[0]<<1;
			continue;
		}
		vector<char> v;
		vector<int> v_;
		int count= 1;
		for(int i=1; i<s.length(); i++){
			
			if(s[i]==s[i-1]){
				count++;
				if(i== s.length()-1){
					v.push_back(s[i-1]);
					v_.push_back(count);
				}
			} else{
				v.push_back(s[i-1]);
				v_.push_back(count);
				count= 1;
				if(i== s.length()-1){
					v.push_back(s[i]);
					v_.push_back(count);
				}
			}
		}
		
		for(int i=0; i<v.size(); i++){
			cout<<v.at(i)<<v_.at(i);
		}
		cout<<endl;
	}
}
