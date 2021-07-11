#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n, k;
		cin>>n>>k;
		int a[n];
		vector<int> v; 
//		for(int i=0; i<n; i++){
//			cin>>a[i];
//			if(i>=k-1){
//				int max= a[i];
//				for(int j=1; j<k; j++){
//					if(max<a[i-j]){
//						max= a[i-j];
//					}
//				}
//				v.push_back(max);
//			}
//		}

//  0 1 2 3 4 5 6
		deque<int> q;
		for(int i=0; i<n; i++){
			cin>>a[i];
			q.push_back(a[i]);
			if(i>=k-1){
				if(i>=k){
					q.pop_front();
				}
				int max= *max_element(q.begin(), q.end());
				v.push_back(max);
			}
			
		}
	
		for(int i=0; i<v.size(); i++){
			cout<<v.at(i)<<" ";
		}
		cout<<endl;
		
	}
}
