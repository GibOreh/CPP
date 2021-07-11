#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string n;
		cin>>n;
		
		int x= n[n.length()-2];
		int y= n[n.length()-1];
		
		if(x==56 && y==54){
			cout<<1;
		} else{
			cout<<0;
		}
		cout<<endl;
	}
}
