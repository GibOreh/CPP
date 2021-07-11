#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	
	while(t--){
		string s;
		cin>>s;
		sort(s.begin(), s.end());
		int max=0;
		int count=1;
		for(int i=1; i<s.length(); i++){
			if(s[i]== s[i-1]){
				count++;
			} else{
				if(count>max){
					max= count;
					count=1;
				}
			}
		}
		if(count>max){
			max= count;		
		}
		if(s.length()%2==0){
			if(max<=s.length()/2){
				cout<<1<<endl;
			}else{
				cout<<0<<endl;
			}
		} else{
			if(max<=(s.length()/2)+1){
				cout<<1<<endl;
			}else{
				cout<<0<<endl;
			}
		}
		
	}
}

