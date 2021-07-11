#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
    cin>>t;
    while (t--){
        string a;
		cin>>a;
        long long tongChan=0;
		long long tongLe=0; 
        for(int i=0; i<a.length(); i++){
            if(i%2==1){
            	tongLe+= (a.at(i)-'0');
			} else{
				tongChan+= (a.at(i)-'0');
			} 
        }
        if((tongLe-tongChan)%11==0){
        	cout<<1<<endl;
		} else{
			cout<<0<<endl;
		}
    }
}
