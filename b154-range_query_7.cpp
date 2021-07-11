# include <bits/stdc++.h>
using namespace std;

//chua ac

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,x;
		cin>>n>>x;
		int a[n];
		long long sum=0;
		for(int i=0; i<n; i++){
			cin>>a[i];
			sum= sum+a[i];
		}
		if(sum<=x){
			cout<<-1<<endl;
			continue;
		}
		int upper= upper_bound(a, a+n, x) - a;
		if(upper!=n){
			cout<<1<<endl;
			continue;
		}
		int min= n+1;
		for(int i= 0; i<n; i++){
			int temp= a[i];
			for(int j= i+1; j<n; j++){
				temp= temp+a[j];
				if(temp>x && (j-i+1)<min){
					min= j-i+1;
				}
			}
		
		}
		cout<<min<<endl;
	}
}
