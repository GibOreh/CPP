#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int n = s.length();
 	    int count = 0;
 	    
    	bool a[256]= { false };
    	for (int i = 0; i < n; i++) {
        	if (a[s[i]]== false) {
            	a[s[i]]= true;
            	count++;
        	}
   		}

    	int start = 0;
		int index = -1;
		int min= 100001;
 
   		int count_= 0;
    	int aa[256]= { 0 };
    	for (int i= 0; i<n; i++) {
        	aa[s[i]]++;
        	if (aa[s[i]] == 1)
            count_++;
        	if (count_ == count) {
            	while (aa[s[start]] > 1) {
                	if (aa[s[start]] > 1){
                		aa[s[start]]--;
					}
   
                	start++;
            	}
            	int distance = i - start + 1;
            	if (min > distance) {
            	    min = distance;
            	    index = start;
            	}
        	}
    	}
		cout<<min<<endl;
	}
}
