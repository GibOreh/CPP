#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n1,n2,n3;
		cin>>n1>>n2>>n3;
		long long a[n1], b[n2], c[n3];
		vector<long long> v1,v2,v3;
//		vector<long long>::iterator x;
//		vector<long long>::iterator y;
		for(int i=0; i<n1; i++){
			cin>>a[i];
			v1.push_back(a[i]);
		}
		for(int i=0; i<n2; i++){
			cin>>b[i];
			v2.push_back(b[i]);
		}
		for(int i=0; i<n3; i++){
			cin>>c[i];
			v3.push_back(c[i]);
		}
		
		vector<long long> v;
//		
//		if(n1<=n2 && n1<=n3){
//			for(int i=0; i<n1; i++){
//				x = find (v2.begin(), v2.end(), v1.at(i));
//				y = find (v3.begin(), v3.end(), v1.at(i));
//				if(x != v2.end() && y != v3.end()){
//					v.push_back(v1.at(i));
//				}
//			}
//		} else if(n2<=n1 && n2<=n3){
//			for(int i=0; i<n2; i++){
//				x = find (v1.begin(), v1.end(), v2.at(i));
//				y = find (v3.begin(), v3.end(), v2.at(i));
//				if(x != v1.end() && y != v3.end()){
//					v.push_back(v2.at(i));
//				}
//			}
//		} else if(n3<=n1 && n3<=n2){
//			for(int i=0; i<n3; i++){
//				x = find (v1.begin(), v1.end(), v3.at(i));
//				y = find (v2.begin(), v2.end(), v3.at(i));
//				if(x != v1.end() && y != v2.end()){
//					v.push_back(v3.at(i));
//				}
//			}
//		}
//		
//		if(v.empty()){
//			cout<<-1<<endl;
//		} else{
//			for(int i=0; i<v.size(); i++){
//				cout<<v.at(i)<<" ";
//			}
//			cout<<endl;
//		}

		int x=0, y=0, z=0;
		while(x<n1 && y<n2 && z<n3){
			if(a[x]==b[y] && a[x]==c[z]){
				v.push_back(a[x]);
				x++;
			} else
			if(a[x]>b[y]){
				y++;
			} else
			if(a[x]>c[z]){
				z++;
			} else{
				x++;
			}
		}
		if(v.empty()){
			cout<<-1<<endl;
		} else{
			for(int i=0; i<v.size(); i++){
				cout<<v.at(i)<<" ";
			}
			cout<<endl;
		}	
		
	}
}
