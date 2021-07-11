#include<bits/stdc++.h>
using namespace std;

bool check(int n){
    if(n<=1){
    	return false;
	} else{
		for(int i=2; i<=sqrt(n); i++){
			if(n%i==0){
				return false;
			}
		}
	}
	return true;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long long a;
		cin>>a;
		string s="";
		while(a){
			int temp= a%10;
			if(temp>1){
				if(check(temp)){
					s+=(char)(temp+'0');
				} else{
					if(temp==4){
						s+="322";	
					} else if(temp==6){
						s+="53";
					} else if(temp==8){
						s+="7222";
					} else{
						s+="7332";
					} 
				}
			}
			a= a/10;
		}
		sort(s.begin(),s.end(),greater<char>());
		cout<<s<<endl;
	}
}
