#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		vector<int> v;
		int count=0;
		for(int i=0; i<n; i++){
			cin>>a[i];
			v.push_back(a[i]);
		}
		sort(v.begin(), v.end());
		for(int i=0; i<n-1; i++){
			if(v.at(i+1)!=v.at(i)){
				count+= v.at(i+1)-v.at(i)-1;
			}
		}
		cout<<count<<endl;
	}
}
