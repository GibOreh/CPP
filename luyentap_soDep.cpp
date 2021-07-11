#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int n= s.length();
		bool ok= true;
		for(int i=0; i<(n/2); i++){
			if((s[i] - '0')%2==1){
				ok= false;
				break;
			}
			if(s[i] != s[n-1-i]){
				ok= false;
				break;
			}
		}
		if(ok){
			cout<<"YES"<<endl;
		} else{
			cout<<"NO"<<endl;
		}
	}
}

// 0 1 2 3
// 0 1 2 3 4
