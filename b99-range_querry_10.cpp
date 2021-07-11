#include<bits/stdc++.h>
using namespace std;
int count_= 0;

void Try(int a[], int start, int end){
	
	if(start==end || end-start==1 && a[start]==a[end]){
		return;
	}
	 
	if(a[start] < a[end]){
		count_++;
		start++;
		a[start] += a[start-1];
		Try(a, start, end);
	} else if(a[start]==a[end]){
		Try(a, start+1, end-1);
	} else{
		end--;
		a[end]= a[end]+a[end+1];
		count_++;
		Try(a, start, end);
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		count_ =0;
		int n;
		cin>>n;
		int a[n];
		for(int i=0; i<n; i++){
			cin>>a[i];
		}
		
		Try(a,0,n-1);
		cout<<count_<<endl;
	}
	return 0;
}
