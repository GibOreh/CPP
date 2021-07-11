#include <bits/stdc++.h>
using namespace std;
  
int main() {
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[n];
		for(int i=0; i<n; i++){
			cin>>a[i];
		}
		int count = 0;
    	for (int i=0; i<n; i++){
    		if (a[i] <= k){
    			++count;
			}
		}
    	    
    	int count2 = 0;
   		for (int i=0; i<count; i++){
   			if (a[i] > k){
   				++count2;
			   }
    	        
		   }
    	    
    	int result = count2;
    	for (int i=0, j=count; j<n; i++, j++) {
        	if (a[i] > k){
        		--count2;
			}
       		if (a[j] > k){
       			++count2;
			   }
        	result= min(result, count2);
		}
		cout<<result<<endl;
	}
    
}
