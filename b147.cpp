#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int a[n][m];
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				cin>>a[i][j];
			}
		}
		int x,y;
		cout<<a[0][0]<<" ";
		for(int i=1; i<n+m-2; i++){
			if(i%2==1 && i<m){
				x=0;
				y=i-x;
				while(x<=i && x<n && y<m){
					
					cout<<a[x][y]<<" ";
					x++;
					y=i-x;
				}
			} else
			if(i%2==1 && i>=m){
				y=m-1;
				x=i-y;
				while(y>=0 && x<n && y<m){
					
					cout<<a[x][y]<<" ";
					y--;
					x=i-y;
				}
			} else
			if(i%2==0 && i<n){
				y=0;
				x=i-y;
				while(y<=i && x<n && y<m){
					
					cout<<a[x][y]<<" ";
					y++;
					x=i-y;
				}
			} else
			if(i%2==0 && i>=n){
				x=n-1;
				y=i-x;
				while(x>=0 && x<n && y<m){
				
					cout<<a[x][y]<<" ";
					x--;
					y=i-x;
				}
			}
		}
		
		cout<<a[n-1][m-1]<<endl;
	}
}
