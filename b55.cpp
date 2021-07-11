#include<iostream>
#include<vector>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		vector<char> v1;
		vector<char> v2;
		
		for(int i=0; i<s.length(); i++){
			bool ok= true;
			for(int j=0; j<v1.size(); j++){
				if(v1.at(j)==s[i]){
					ok= false;
					break;
				}
			}
			if(ok){
				v1.push_back(s[i]);
			} else{
				v2.push_back(s[i]);
			}
		}
		for(int i=0; i<s.length(); i++){
			bool ok= true;
			for(int j=0; j< v2.size(); j++){
				if(s[i]== v2.at(j)){
					ok= false;
					break;
				}
			}
			if(ok){
				cout<<s[i];
			}
		} 
		cout<<endl;
	}
}
