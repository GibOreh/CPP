#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	getchar();
	while(t--){
		string n;
		cin>>n;
    	long long value= 0;
        
        value= value + (n.at(n.length()-1)-'0');
        for(int i= 0; i<n.length()-1; i++){
            if(n.at(n.length()-2-i)=='1'){
                if(i%4==0){
                	value+=2;
				} else if(i%4==1){
					value+=4;
				} else if(i%4==2){
					value+=3;
				} else{
					value+=1;
				} 
            }            
        }
    	if(value%5==0){
    		cout<<"Yes"<<endl;
		} else{
			cout<<"No"<<endl;
		}
	}
}
