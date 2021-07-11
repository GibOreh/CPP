#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		vector<int> v;
		for(int i=0; i<n; i++){
			cin>>a[i];
			v.push_back(a[i]);
		}
		sort(v.begin(), v.end());
		bool ok=false;
		if(v.size()==1){
			cout<<-1<<endl;
		} else{
			for(int i=1; i<n; i++){
				if(v.at(0)!=v.at(i)){
					cout<<v.at(0)<<" "<<v.at(i)<<endl;
					ok= true;
					break;
				}
			}
		}
		if(!ok){
			cout<<-1<<endl;
		}
		
	}
}
