#include<bits/stdc++.h>
using namespace std;

int comperator(string a, string b){
    string ab = a.append(b);
    string ba = b.append(a);
    if(ab.compare(ba)>0){
    	return 1;
	} else{
		return 0;
	}
}
 
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string a[n];
		vector<string> v;
		for(int i=0; i<n; i++){
			cin>>a[i];
			v.push_back(a[i]);
		}
		sort(v.begin(), v.end(), comperator);
 
   		for (int i= 0; i<v.size(); i++){
   			cout<<v.at(i);
		}
		cout<<endl;
	}
}

