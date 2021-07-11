#include<iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,x;
		cin>>n>>x;
		int a[n];
		int index=-1;
		int isFirst=true;
		for(int i=0; i<n; i++){
			cin>>a[i];
			if(a[i]==x && isFirst){
				index=i+1;
				isFirst= false;
			}
		}
		cout<<index<<endl;
	}
}
