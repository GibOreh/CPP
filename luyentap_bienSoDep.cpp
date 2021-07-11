#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string n;
		getline(cin,n);
		int a[5];
		int index= 0;
		int i= 0;
		while(i<5){
			if(n[n.length()-1-index] != '.'){
				a[i]= n[n.length()-1-index];
				i++;
			}
			index++;
		}
	
		bool check1= true;
		for(int i=1; i<5; i++){
			if(a[i]>=a[i-1]){
				check1= false;
				break;
			}
		}
		bool check2= true;
		for(int i=0; i<5; i++){
			if(a[i] != '6' && a[i] != '8'){
				check2= false;
				break;
			}
		}
		bool check3= true;
		if(a[0]!=a[1]){
			check3= false;
		}
		for(int i=3; i<5; i++){
			if(a[i] != a[i-1]){
				check3= false;
			}
		}
		
		if(check1 || check2 ||check3){
			cout<<"YES"<<endl;
		} else{
			cout<<"NO"<<endl;
		}
	}
}
