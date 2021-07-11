#include<bits/stdc++.h>
using namespace std;

int main(){
	struct Word{
		string str;
		int status;
	};
	
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s1;
		getline(cin, s1);
		string s2;
		getline(cin, s2);
		vector<string> v1,v2;
		vector<string>::iterator it;
		vector<string>::iterator it_;
		
		s1.erase(s1.find_last_not_of(" ")+1);
		s1.erase(0,s1.find_first_not_of(" "));
		
		int pos= s1.find("  ");
		while(pos>-1){
			s1.replace(pos,2, " ");
			pos= s1.find("  ");
		}
		
		s2.erase(s2.find_last_not_of(" ")+1);
		s2.erase(0,s2.find_first_not_of(" "));
		
		pos= s2.find("  ");
		while(pos>-1){
			s2.replace(pos,2, " ");
			pos= s2.find("  ");
		}
		
		for(int i=s2.length()-1; i>=0; i--){
			if(s2[i]==' '){
				string str= s2.substr(i+1, s2.length()-i-1);
				v2.push_back(str);
				s2= s2.substr(0, i);
				i= s2.length();
			}
		}
		v2.push_back(s2);
		for(int i= s1.length()-1; i>=0; i--){
			if(s1[i]==' '){
				string str= s1.substr(i+1, s1.length()-i-1);
				it= find(v2.begin(), v2.end(), str);
				it_= find(v1.begin(), v1.end(), str);
				if(it == v2.end() && it_ == v1.end()){
					v1.push_back(str);
				}
				s1= s1.substr(0, i);
				i= s1.length();
			}
		}
		it= find(v2.begin(), v2.end(), s1);
		it_= find(v1.begin(), v1.end(), s1);
		if(it == v2.end() && it_ == v1.end()){
			v1.push_back(s1);
		}
		sort(v1.begin(), v1.end());
		for(int i=0; i<v1.size(); i++){
			cout<<v1.at(i)<<" ";
		}
		cout<<endl;
		
	}
}
