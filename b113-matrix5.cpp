#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n][n];
        int sum=0;
        
        for (int i= 0; i<n; i++) {
        	for (int j= 0; j<n; j++) {
            	cin>>a[i][j];
            	sum= sum+ a[i][j];
        	}
    	}
    	
        int x= 0;
	    for(int i= 0; i<n; i++) {
	        int y = 0;
	        for(int j= 0; j<n; j++){
				y= y+ a[i][j];
			}
	        x= max(x, y);
	    }
	    
	    for (int i = 0;i<n;i++) {
	        int z = 0;
	        for (int j= 0; j<n; j++){
	            z= z+ a[j][i];
	        }
	        x = max(x, z);
	    }
	    cout<<(n*x) - sum<<endl;
    }
}
