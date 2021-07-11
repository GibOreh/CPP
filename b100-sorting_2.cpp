#include<bits/stdc++.h>
using namespace std;

//int main(){
//	int t;
//	cin>>t;
//	while(t--){
//		int n, x;
//		cin>>n>>x;
//		int a[n];
//		int b[n];
//		for(int i=0; i<n; i++){
//			cin>>a[i];
//			b[i]= abs(x-a[i]);
//		}
//		for(int i=0; i<n-1; i++){
//			for(int j=i+1; j<n; j++){
//				if(b[i]>b[j]){
//					swap(b[i], b[j]);
//					swap(a[i], a[j]);
//				}
//			}
//		}
//		for(int i=0; i<n; i++){
//			cout<<a[i]<<" ";
//		}
//		cout<<endl;
//	}
//}

int x;
bool comperator(int a,int b){
	if(abs(a-x)<abs(b-x)){
		return true;
	}
	return false;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n>>x;
		int a[n];
		for(int i=0; i<n; i++){
			cin>>a[i];
		}
		stable_sort(a, a+n, comperator);
		for(int i=0; i<n; i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
}
