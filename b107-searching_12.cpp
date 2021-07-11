#include<bits/stdc++.h>
using namespace std;



int main(){
	int t;
	cin>>t;
	while(t--){
		int n, x;
		cin>>n>>x;
		int a[n];
		for(int i=0; i<n; i++){
			cin>>a[i];
		}
		sort(a, a+n);
		int start= 0; 
		int end= 1;
		bool ok= true;
		while(start<n && end<n){
			if(a[end] - a[start] >x){
				start++;
			} else if(a[end] - a[start] <x){
				end++;
			} else if(a[end] - a[start] == x){
				ok= false;
				cout<<1<<endl;
				break;
			}
		}
		if(ok){
			cout<<-1<<endl;	
		}
		
	}
}
