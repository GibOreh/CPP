#include <bits/stdc++.h>
using namespace std;
 
int main(){
   int t;
   cin>>t;
   while(t--){
   		int m,n;
   		cin>>m>>n;
   		int a[m][n];
   		for(int i=0; i<m; i++){
   			for(int j=0; j<n; j++){
   				cin>>a[i][j];
		   	}
	   	}
	   	int x= 0;
		int y= 0;
		int index;
		int index_;
		int r=m;
		int c=n;
		while(x<r && y<c){
			if(x+1==r || y+1==c){
				break;
			}
        	index = a[x+1][y];
        	for(int i=y; i<c; i++){
            	index_= a[x][i];
            	a[x][i]= index;
            	index= index_;
        	}
        	x++;
        	
        	for(int i= x; i<r; i++){
            	index_= a[i][c-1];
            	a[i][c-1]= index;
           		index= index_;
        	}        	
        	c--;
        	if(x<r){
            	for(int i= c-1; i>=y; i--){
                	index_= a[r-1][i];
                	a[r-1][i] = index;
                	index = index_;
            	}
        	}
        	r--;
        	
        	if(y<c){
            	for(int i= r-1; i>=x; i--){
                	index_ = a[i][y];
                	a[i][y] = index;
                	index = index_;
            	}
        	}
        	y++;
		}
		for(int i=0; i<m; i++){
			for(int j=0; j<n; j++){
				cout<<a[i][j]<<" ";
			}
		}
		cout<<endl;
   }
}
