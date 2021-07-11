#include<bits/stdc++.h>
using namespace std;

int main(){
	
		int n;
		int m;
		int k;
		cin>>n>>m>>k;
		int a[m];
		int b[n]= {(0)};
		for(int i= 0; i<m; i++){
			cin>>a[i];
			
			for(int j= a[i]-k >= 0? a[i]-k : 0; j<= (a[i]+k < n ? a[i]+k : n-1); j++){
				b[j]= 1;
			}
		}
		int count= 0;
		for(int i=0; i<n; i++){
			if(b[i]==0){
				count++;
				for(int j=i; j<= i+k+k; j++){
					b[j]= 1;
				}
				i= i+k+k;
			}
		}
		cout<<count<<endl;
	
}
