#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[n][k];
		vector<int> v;
		for(int i=0; i<n; i++){
			for(int j=0; j<k; j++){
				cin>>a[i][j];
				v.push_back(a[i][j]);
			}
		
		}
		
		sort(v.begin(), v.end());
		for(int i=0; i<k*n; i++){
			cout<<v.at(i)<<" ";
		}
		cout<<endl;
	}
}
