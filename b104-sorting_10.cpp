#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string a[n];
		for(int i=0; i<n; i++){
			cin>>a[i];
		}
		vector<char> v;
		for(int i=0; i<n; i++){
			int length= a[i].length();
			for(int j=0; j<length; j++){
				v.push_back(a[i][j]);
			}
		}
		sort(v.begin(), v.end());
		cout<<v.at(0)<<" ";
		for(int i=1; i<v.size(); i++){
			if(v.at(i) != v.at(i-1)){
				cout<<v.at(i)<<" ";
			}
		}
		cout<<endl;
	}
}
