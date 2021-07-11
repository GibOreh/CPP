#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string n;
		cin>>n;
		bool ok= true;
		for(int i=1; i<n.length(); i++){
			if(n[i]<n[i-1]){
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
