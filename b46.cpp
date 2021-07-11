#include<iostream>
#include<vector>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		int result;
		for(int i=0; i<n; i++){
			cin>>a[i];
		}
		vector<int> v;
		bool ok=false;
		v.push_back(a[0]);
		for(int i=1; i<n; i++){
			for(int j=0; j<v.size(); j++){
				if(a[i]==v.at(j)){
					result=v.at(j);
					ok=true;
					break;
				}
			}
			if(ok){
				break;
			}
			v.push_back(a[i]);
		}
		if(ok){
			cout<<result<<endl;
		} else{
			cout<<-1<<endl;
		}
		
	}
}
