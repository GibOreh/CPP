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
		
		for(int i=0; i<n-1; i++){
			cin>>a[i];
			v.push_back(a[i]);
		}
		sort(v.begin(), v.end());
		int result=v.at(n-2 )+1;
		for(int i=0; i<n-2; i++){
			if(v.at(i+1)-v.at(i)>1){
				result= (v.at(i+1)+v.at(i))/2;
				break;
			}
		}
		cout<<result<<endl;
	}
}
