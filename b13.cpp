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
		
		string s="";
		
		for(int i=name.length()-1; i>=0; i--){
			if(name[i]==' '){
				s+=(name.substr(i+1, name.length()-1-i));
				s+=(name.substr(0,1)) ;
				for(int j=0; j<=i-1; j++){
					if(name[j]==' '){
						s+= name.substr(j+1, 1);
					}
				}
				break;
			}
		}
		
		
		s+="@ptit.edu.vn" ;
		
	cout<<s;
}
	
