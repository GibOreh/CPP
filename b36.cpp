#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		long long n,m;
		cin>>n>>m;
		long long a[n],b[m];
		vector<long long> v;
		for(long long i=0; i<n; i++){
			cin>>a[i];
			v.push_back(a[i]);
		}
		for(long long i=0; i<m; i++){
			cin>>b[i];
			v.push_back(b[i]);
		}
		sort(v.begin(), v.end());
		for(long long i=0; i<m+n; i++){
			cout<<v.at(i)<<" ";
		}
		cout<<endl;
	}
}
