#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;cin>>n;
		map<int,int> mp;
		for(int i=0;i<n;i++){
			int tmp;cin>>tmp;
			mp[tmp]++;
		}
		int dem=0;
		for(auto m: mp){
			if(m.second>1) dem+=m.second;
		}
		cout<<dem<<endl;
	}
}
//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//	int t;
//	cin>>t;
//	while(t--){
//		int n;
//		cin>>n;
//		int a[n];
//		for(int i=0; i<n; i++){
//			cin>>a[i];
//		}
//		sort(a, a+n);
//		int count=1;
//		int result=0;
//		
//		for(int i=1; i<n; i++){
//			if(a[i]==a[i-1]){
//				count++;
//			} else{
//				if(count>1){
//					result+=count;	
//				}	
//				count=1;
//			}
//		}
//		if(count>1){
//			result+=count;	
//		}
//		cout<<result<<endl;
//	}
//}
//

