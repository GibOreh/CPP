#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		deque<long long> v;
		for(int i=0; i<n; i++){
			cin>>a[i];
			v.push_back(a[i]);
		}
		bool ok= false;
		deque<long long>::iterator it;
		for(int i=0; i<n; i++){
			int value= a[i];
			v.pop_front();
			it=find(v.begin(), v.end(), value);
			if(it!=v.end()){
				cout<<a[i];
				ok= true;
				break;
			}
		}
		if(!ok){
			cout<<"NO";
		}
		cout<<endl;
	}
}
