#include<bits/stdc++.h>
using namespace std;
  
int main(){
	int t;
	cin>>t;
	while(t--){
		int n, m;
		cin>>n>>m;
		int a[n][m];
		int b[n+1][m+1];
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				cin>>a[i][j];
			}
		}
		for(int i=0; i<m; i++){
			b[0][i]= a[0][i];
			
			for(int j=1; j<n; j++){
				if(a[j][i]!=0){
					b[j][i]= b[j-1][i]+1;
				} else{
					b[j][i]= 0;
				}
			}
		}
		
		for(int i=0; i<n; i++){
			int count[n+1]= {0};
			for(int j=0; j<m; j++){
				count[b[i][j]]++;
			}
			
			int index=0;
			for(int j=n; j>=0; j--){
				if(count[j]>0){
					for(int z=0; z<count[j]; z++){
						b[i][index]= j;
						index++;
					}
				}
			}
		}
		int result=0;
		int result_;
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				result_= (j+1)*b[i][j];
				if(result_ > result){
					result= result_;
				}
			}
		}
		
		cout<<result<<endl;
	}
}
