#include<iostream>
#include<string>
using namespace std;

int main(){
	string s;
	getline(cin, s);
	string r;
	getline(cin, r);
	int index= s.find(r);

	string str= s.substr(0, index) + s.substr(index+r.length() , s.length()-1);
	int pos= str.find("  ");
	while(pos>-1){
		str.replace(pos,2, " ");
		pos= str.find("  ");
	}
	char start=str[0];
	while(start==' '){
		str= str.substr(1, s.length()-1);
		start=str[0];
	}
//	char end=str[str.length()-1];
//	while(end==' '){
//		str= str.substr(0, s.length()-2);
//		end=str[str.length()-1];
//	}
	str.erase(str.find_last_not_of(" ")+1);
	cout<<str;
}
