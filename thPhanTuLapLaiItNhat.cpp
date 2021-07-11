#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0; i<n; i++){
			cin>>a[i];
		}
		sort(a, a+n);
		int count=1;
		vector<int> v;
		
		for(int i=1; i<n; i++){
			if(a[i]==a[i-1]){
				if(count==1){
					v.push_back(a[i]);
					v.push_back(a[i-1]);
				} else{
						v.push_back(a[i]);
				}
				count++;
			} else{
				count=1;
			}
		}
		
		cout<<v.size()<<endl;
	}
}
