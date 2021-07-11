#include<bits/stdc++.h>

using namespace std;

string tinh(string x, string y){
	if(x.length() > y.length()){
		swap(x,y);
	}
	
	int nX= x.length();
	int nY= y.length();
	string result="";
	
	reverse(x.begin(), x.end());
	reverse(y.begin(), y.end());
	
	int mem=0;
	for(int i=0; i<nX; i++){
		int sum= x[i] + y[i] - 96 + mem;
		result.push_back(sum%10 +48);
		mem= sum/10;
	}
	for(int i=nX; i<nY; i++){
		int sum= y[i] - 48 + mem;
		result.push_back(sum%10 +48);
		mem= sum/10;
	}
	if(mem){
		result.push_back(mem+48);
	}
	reverse(result.begin(), result.end());
	
	return result;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		string x;
		string y;
		cin>>x>>y;
		cout<<tinh(x,y)<<endl;
	}
}
