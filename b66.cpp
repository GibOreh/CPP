#include<iostream>
#include<math.h>
#include<vector>
#include<math.h>
using namespace std;

bool check(int n){
	if(n<=1){
		return false;
	} else{
		for(int i= 2; i<= sqrt(n); i++){
			if(n%i==0){
				return false;
			}
		}
	}
	return true;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> v;
		for(int i=1; i<=n; i++){
			if(check(i)){
				v.push_back(i);
			}
		}
		
		bool ok= false;
		for(int i=0; i<= v.size()-1; i++){
			for(int j=i; j<=v.size()-1; j++){
			
				if(v.at(i)+v.at(j)==n){
					cout<<v.at(i)<<" "<<v.at(j)<<endl;
					ok= true;
					break;
				}
			}
			if(ok){
				break;
			}
			
		}
	}
}
