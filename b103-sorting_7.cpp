#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		int b[n];
		for(int i=0; i<n; i++){
			cin>>a[i];
			b[i]= a[i];
		}
		sort(b, b+n);
//		for(int i=0; i<n; i++){
//			cout<<b[i]<<" ";
//		}
//		cout<<endl;
		int start= 0;
		int end= n;
		for(int i=0; i<n; i++){
			if(a[i]==b[i]){
				start= i;
			} else{
				start= i;
				break;
			}
		}
		for(int i= end-1; i>=start; i--){
			if(a[i]==b[i]){
				end= i;
			} else{
				break;
			}
		}
		cout<<start+1<<" "<<end<<endl;
	}
}
//2
//11
//10 12 20 30 25 40 32 31 35 50 60
//9
//0 1 15 25 6 7 30 40 50
