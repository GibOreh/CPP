#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[100][100]; 
		for (int i = 0; i < n; i++) { 
			for (int j = 0; j < n; j++) 
				cin >> a[i][j]; 
		} 
		for (int i = 0; i < n; i++) 
			sort(a[i], a[i] + n); 
		int b[100]= {};
		bool ok= false;
		int count= 0; 
		for (b[0]= 0; b[0]<n; b[0]++) { 
			int temp= a[0][b[0]];
			bool check= true; 
			for (int i= 1; i<n; i++) { 
				while(b[i] < n && a[i][b[i]] <= temp) { 
					b[i]++;
				} 
				if(a[i][b[i]-1] != temp) { 
					check= false; 
				} 
				if(b[i] == n) { 
					ok= true;
					break; 
				} 
			} 
			if(check){
				count++;
			}  
			if(ok){
				break;	
			} 
		} 
		cout<<count<<endl;
		
		//===================================================================
//		vector<int> v;
//		for(int i=0; i<n; i++){
//			bool ok= false;
//			for(int j=0; j<v.size(); j++){
//				if(v.at(j)==a[0][i]){
//					ok= true;
//					break;
//				}
//			}
//			if(ok){
//				continue;
//			}
//			bool add= false;
//			for(int x=1; x<n; x++){
//				add= false;
//				for(int y=0; y<n; y++){
//					if(a[0][i]== a[x][y]){
//						add= true;
//						break;
//					}
//				}
//			}
//			if(add){
//				v.push_back(a[0][i]);
//			}
//		}
//		cout<<v.size()<<endl;
		
		//=================================================================
		
//		deque<int> q;
//		for(int i=0; i<n; i++){
//			bool ok= true;
//			for(int j=0; j<q.size(); j++){
//				if(a[0][i]==q.at(j)){
//					ok= false;
//					break;
//				}
//			}
//			if(ok){
//				q.push_back(a[0][i]);
//			}
//			
//		}
//		for(int i= 1; i<n; i++){
//			if(q.empty()){
//				break;
//			}
//			
//			int index= q.size();
//			while(index--){
//				for(int j=0; j<n; j++){
//					if(a[i][j]==q.front()){
//						q.push_back(a[i][j]);
//						break;
//					}
//				}
//				q.pop_front();
//			}
//		}
//		cout<<q.size()<<endl;
	}
}
