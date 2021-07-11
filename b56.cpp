#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	getchar();
	while(t--){
		
		string s;
		getline(cin, s);
		
		s.erase(s.find_last_not_of(" ")+1);
		s.erase(0,s.find_first_not_of(" "));
		
		vector<string> v;
		int index=-1;
		
		
		for(int i=0; i<s.length(); i++){
			if(s[i]==' '){
				v.push_back(s.substr(index+1,i-index-1));
				index=i;
			}
		}
		v.push_back(s.substr(index+1, s.length()-index-1));
		
		
		for(int i=v.size()-1; i>=0; i--){
			cout<<v.at(i)<<" ";
		}
		
		cout<<endl;
	}
    
}
