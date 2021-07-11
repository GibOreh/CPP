#include<iostream>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int count= s.length();
		
		for(int i=0; i<s.length()-1; i++){
			
			for(int j=i+1; j<s.length(); j++){
				if(s[i]==s[j]){
					count++;
				}
			}
		}
		cout<<count<<endl;
		
	}
}
