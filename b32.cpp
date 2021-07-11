#include<iostream>
#include<vector>
#include<algorithm>
#include<list>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> v;
		int a[n];
		for(int i=0; i<n; i++){
			cin>>a[i];
			v.push_back(a[i]);
		}
		sort(v.begin(), v.end());
		list<int> list;
		for(int i=0; i<n; i++){
			list.push_back(v.at(i));
		}
		while(1){
			if(!list.empty()){
				cout<<list.back()<<" ";
				list.pop_back();
			} else{
				break;
			}
			if(!list.empty()){
				cout<<list.front()<<" ";
				list.pop_front();
			} else{
				break;
			}
		}
		
		cout<<endl;
	}
}
