#include<iostream>
#include<math.h>
#include<vector>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string a;
		cin>>a;
		int fa=1;
		for(int i=0; i<n; i++){
			int m=1;
			for(int j=1; j<=(a[i]-48); j++){
				m= m*j;
			}
			fa=fa*m;
		}
		cout<<fa<<endl;
		
		vector<int> v;
		bool ok= true;
		while(ok){
			for(int i=2; i<=9; i++){
				int x=1;
				for(int j=1; j<=i; j++){
					x=x*j;
				}
				if(fa%x==0){
					v.push_back(x);
					fa= fa/x;
					break;
				}
			}
			if(fa==1){
				ok= false;
			}
		}
		for(int i=0; i<v.size(); i++){
			cout<<v.at(i);
		}
	}
}
