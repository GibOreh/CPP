#include<bits/stdc++.h>
using namespace std;
 
int n;
int b[21];
int a[21];
 
void Try(int k) {
    for (int i= 1; i<= n; i++) {
        if (!b[i]) {
            a[k]= i; 
            b[i]= 1;
            if (k==n){
            	for (int i= 1; i<= n; i++){
            		cout<<a[i];
				}
    			cout<<" ";
			}
            else{
            	Try(k+1);
			}
            b[i]= 0;
        }
    }
}
 
int main() {
    int t;
    cin>>t;
    while(t--){
    	cin>> n;
    	for(int i=0; i<21; i++){
    		b[i]=0;
		}
    	Try(1);
    	cout<<endl;
	}
    
}
