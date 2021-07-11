#include<bits/stdc++.h>
using namespace std;

void cal(int n,int s[]){
	int m;
	int p;
	int i;
	for(i=n-1; i>0; i--){
		if(s[i]<s[i-1]){
			m=i;
			break;
		}
	}
	if(i==0 ||(i==1 && s[1]==0)){
	    cout<<"-1";
	    return;
	}
	p=m;
	m--;
	for(i=n-1; i>m; i--){
	    if(s[i]<s[m] && s[i]>=s[p]){
	    	p=i;
		}   
	}
	swap(s[m],s[p]);
	for(int j=0; j<n; j++){
		cout<<s[j];
	}
}


int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int a[s.length()];
		for(int i=0; i<s.length(); i++){
			a[i]=s[i]-'0';
		}
		cal(s.length(),a);
		cout<<endl;
	}
}
