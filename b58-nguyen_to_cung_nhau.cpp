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
        if(n<3){
            cout<<0<<endl;
            continue;
        }
        int count=0;
        for(int i=1; i<=n; i++){
            if(__gcd(i,n)==1){
            	count++;
			} 
        }
        if(check(count)){
            cout<<1<<endl;
            continue;
        }
        cout<<0<<endl;
    }    
}
