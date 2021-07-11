#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		int k;
		cin>>s>>k;
		int result= 0;
		int a[26];
		
		for(int i= 0; i<s.length(); i++){
			int count=0;
			memset(a, 0, sizeof(a));
			for(int j=i; j<s.length(); j++){
				if(a[s[j] - 'a']==0){
					count++;
				} 
				a[s[j] - 'a']++;
				if (count==k){
					result++; 
				} 
            	if(count>k){
            		break;
				}  
			}
		}
		cout<<result<<endl;
	}
}
