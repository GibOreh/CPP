#include<bits/stdc++.h>
using namespace std;

int main(){
	string name;
	getline(cin, name);
	
		name.erase(name.find_last_not_of(" ")+1);
		name.erase(0,name.find_first_not_of(" "));
		
		int pos= name.find("  ");
		while(pos>-1){
			name.replace(pos,2, " ");
			pos= name.find("  ");
		}
		
		
		for(int i=0; i<name.length(); i++){
			if(name[i]<=90 && name[i]>=65){
				name[i]=name[i]+32;
			}
		}
		
		
	string ten="";
	string ho="";
	for(int i=name.length()-1; i>=0; i--){
		if(name[i]==' '){
			ten+= name.substr(i+1, name.length()-1-i);
				for(int j=0; j<=i-1; j++){
					if(name[j]==' '){
						name[j+1]-=32;
					}
				}
				name[0]-=32;
			ho+= name.substr(0,i);
			break;
		}
	}
	for(int i=0; i<ten.length(); i++){
		ten[i]-= 32;
	}
	cout<<ho<<", "<<ten;
}
