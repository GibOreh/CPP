#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n, m;
		cin>>n>>m;
		int a[n], b[m];
		for(int i=0; i<n; i++){
			cin>>a[i];
		}
		for(int i=0; i<m; i++){
			cin>>b[i];
		}
		vector<int> v;
		int c[m];
		for(int i=0; i<m; i++){
			c[i]=0;
		}
		for(int i=0; i<n; i++){
			bool ok= true;
			for(int j=0; j<m; j++){
				if(a[i]==b[j]){
					c[j]= c[j]+1;
					ok=false;
					break;
				}
			}
			if(ok){
				v.push_back(a[i]);
			}
		}
		for(int i=0; i<m; i++){
			for(int j=0; j<c[i]; j++){
				cout<<b[i]<<" ";
			}
		}
		sort(v.begin(), v.end());
		for(int i=0; i<v.size(); i++){
			cout<<v.at(i)<<" ";
		}
		
		
		cout<<endl;
	}
}
