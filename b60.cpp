#include<iostream>
#include<string>
#include <sstream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		if(s.length()<2){
			cout<<s;
		} else{
			int result=0;
			for(int i=0; i<s.length(); i++){
				result+= (s[i]-48);
			}
			while(result>=10){
				int sum=0;
				ostringstream convert;   
    			convert << result;    
				string n= convert.str();
				for(int i=0; i<n.length(); i++){
					sum+= (n[i]-48);
				}
				result=sum;
			}
			cout<<result<<endl;
		}
		
	}
}
