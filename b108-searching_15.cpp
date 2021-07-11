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
		int k,x;
		cin>>k>>x;
		
		deque<int> truoc;
		deque<int> sau;
		int boundUpper= upper_bound(a, a+n, x) - a;
		int boundLower= lower_bound(a, a+n, x) - a;
		for(int i=0; i<n; i++){
			if(i<boundLower){
				truoc.push_back(a[i]);
			} else if(i>=boundUpper){
				sau.push_back(a[i]);
			}
		}
		
//		for(int i=0; i<truoc.size(); i++){
//			cout<<truoc.at(i)<<" ";
//		}
//		cout<<endl;
//		for(int i=0; i<sau.size(); i++){
//			cout<<sau.at(i)<<" ";
//		}
		
		
		int count= k;
		vector<int> v;
		
		while(count){
			if(truoc.empty()){

				v.push_back(sau.front());
				sau.pop_front();
				count--;
			} else
			if(sau.empty()){

				v.push_back(truoc.back());
				truoc.pop_back();
				count--;
			} else {
					v.push_back(sau.front());
					sau.pop_front();
					v.push_back(truoc.back());
					truoc.pop_back();
					count-=2;
			}
			
		}
		sort(v.begin(), v.end());
		for(int i=0; i<v.size(); i++){
			cout<<v.at(i)<<" ";
		}
		cout<<endl;
		
	}
}
