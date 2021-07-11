#include<iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int a[n][m];
		int b[n][m];
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				cin>>a[i][j];
				b[i][j]=0;
			}
		}
		int o=0;
		int x=0;
		int y=0;
		b[0][0]=1;
		int count=n*m-1;
		cout<<a[x][y]<<" ";
		while(count--){
			
			if(o==0){	
				y++;
				if(y==m || b[x][y]==1){
					o=1;
					y--;
					count++;
				} else{
					cout<<a[x][y]<<" ";
				}
				b[x][y]=1;
				
				
			} else if(o==1){
				x++;
				if(x==n || b[x][y]==1){
					o=2;
					x--;
					count++;
				} else{
					cout<<a[x][y]<<" ";
				}
				b[x][y]=1;
				
				
			} else if(o==2){
				y--;
				if(y<0 || b[x][y]==1){
					o=3;
					y++;
					count++;
				} else{
					cout<<a[x][y]<<" ";
				}
				b[x][y]=1;
				
				
			} else if(o==3){
				x--;
				if(x<0 || b[x][y]==1){
					o=0;
					x++;
					count++;
				} else{
					cout<<a[x][y]<<" ";
				}
				b[x][y]=1;
				
			}
			
		}
		cout<<endl;
		
	}
}
