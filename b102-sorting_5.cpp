#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n1,n2;
		cin>>n1>>n2;
		int a[n1];
		int b[n2];
		vector<int> un;
		vector<int> in;
		
		for(int i=0; i<n1; i++){
			cin>>a[i];
		}
		for(int i=0; i<n2; i++){
			cin>>b[i];
		}
		sort(a, a+n1);
		sort(b, b+n2);
		
		int x=0;
		int y=0;
		while(x<n1 && y<n2){
			if (a[x] < b[y]){
				un.push_back(a[x]);
				x++;
			} else if (a[x] > b[y]){
				un.push_back(b[y]);
				y++;
			} else {
            	un.push_back(a[x]);
            	in.push_back(a[x]);
            	x++;
            	y++;
        	}
		}
		while(x<n1){
			un.push_back(a[x]);
			x++;
		}
		while(y<n2){
			un.push_back(b[y]);
			y++;
		}
		
		for(int i=0; i<un.size(); i++){
			cout<<un.at(i)<<" ";
		}
		cout<<endl;
		for(int i=0; i<in.size(); i++){
			cout<<in.at(i)<<" ";
		}
		cout<<endl;
	}
}
