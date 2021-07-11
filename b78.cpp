#include <iostream>
#include<vector>
using namespace std;
bool check(int n){
	bool ok= false;
	if(n==0 || n==1 || n==2 || n==3){
		ok= true;
	} else{
		long long a=0;
		long long a1=1; 
		long long a2=1;
		
		while(a<=n){
			a= (a1+ a2);
        	a1= a2;
        	a2= a;
        	if(a==n){
        		ok= true;
			}
		}
	}
	return ok;
}
int main() {
	int t; 
	cin >> t; 
	while (t--) { 
		int n; 
		cin >> n; 
		int a[n];
		vector<int> v;
		for(int i=0; i<n; i++){
			cin>>a[i];
			if(check(a[i])){
				v.push_back(a[i]);
			}
		}
		for(int i=0; i<v.size(); i++){
			cout<<v.at(i)<<" ";
		}
		cout<<endl;
	}
}
