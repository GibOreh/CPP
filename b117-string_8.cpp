#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		
		string str="0";
		long long max= 0;
		
		for(int i=0; i<s.length(); i++){
			if(s[i]>='0' && s[i]<='9'){
				str= str+s[i];
			
			} else{
				max= max+stoll(str);
				str="0";
			
			}
		}
		max= max+ stoll(str);
		cout<<max<<endl;
	}
}
