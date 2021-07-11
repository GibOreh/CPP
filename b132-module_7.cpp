#include<bits/stdc++.h>
using namespace std;
// chua accept

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
    	cin >> n;
		int result= 0;
    	int arr[n];
    	for(int i = 0 ; i < n ; i++){
    		cin >> arr[i];
		}
        sort(arr, arr + n);  
    	int d = arr[n-1] - arr[0]; 
    	vector <int> v; 
    	for (int i=2; i*i<=d; i++) { 
    	    if (d%i == 0){ 
	            v.push_back(i); 
    	        if (i != d/i) 
        	        v.push_back(d/i); 
    	    } 
    	} 
    	for (int i=0; i<v.size(); i++) { 
	        int temp = arr[0]%v[i]; 

    	    int j; 
        	for (j=1; j<n; j++) 
            	if (arr[j] % v[i] != temp) 
                	break; 

        	if (j == n) 
            	result++; 
    	}

    	cout<<result+1<<endl;
	}
}

