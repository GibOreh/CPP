#include<bits/stdc++.h>
using namespace std;
 
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		int b[n];
		for(int i=0; i<n; i++){
			cin>>a[i];
			b[i]= a[i];
		}
		int count= 0;
		sort(b, b+n);
		for(int i=0; i<n; i++){
        	if (a[i] != b[i]){
            	count++;
            	int index;
            	for(int j=0; j< a.size(); j++){
            		if(a[j]==b[i]){
            			index= j;
					}
				}
            	int temp = a[i];
    			a[i] = a[index];
    			a[index] = temp;
        	}
    	}
		cout<<count;
	}
	
}
 
