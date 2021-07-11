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
		for(int i=0;i<n;i++){
			cin>>a[i];
			b[i]= 1;
		} 
		
		for (int i=1; i<n; i++) {
			for(int j=0; j<i; j++){
				if(a[i]>a[j] && b[i]<b[j]+1)
					b[i]=b[j]+1;
			}
		}
		sort(b, b+n);
		cout<<b[n-1]<<endl;
		cout<<*max_element(b,b+n)<<endl;
	}
}
