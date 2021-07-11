#include <bits/stdc++.h>
using namespace std;

//bool check8(string str){
//	int n= str.length();
//	if(n<3){
//		if(stoll(str)%8==0){
//			return true;
//		}
//	} else{
//		string s;
//		s= str.substr(n-3,3);
//		if(stoll(s)%8==0){
//			return true;
//		}
//	}
//	return false;
//}
//bool check3(string str){
//	int sum= 0;
//	for(int i=0; i<str.length(); i++){
//		int index= str[i]-'0';
//		sum+= index;
//	}
//	if(sum%3==0){
//		return true;
//	}
//	return false;
//}
//
//int main(){
//	int t;
//	cin>>t;
//	while(t--){
//		string s;
//		cin>>s;
//		int count=0;
//		for(int i=0; i<s.length(); i++){
//			for(int j=i; j<s.length(); j++){
//				string str= s.substr(i, j-i+1);
//				if(check8(str) && !check3(str)){
//					count++;
//				}
//			}
//		}
//		cout<<count<<endl;
//	}
//}

int check(string s,int k){ 
	int count=0;
 
	for(int i=0;i<s.length();i++){ 
		int n=0; 
		for(int j=i;j<s.length();j++){ 
			n=n*10+s[j]-'0'; 
			n=n%k; 
			if(n==0){
				count++;
			}  
		} 
	} 
	return count; 
} 
int main(){ 
	int t;
	cin>>t; 
	while(t--){ 
		string s;
		cin>>s; 
		cout<<check(s,8)-check(s,24)<<endl; 
	}  
}
