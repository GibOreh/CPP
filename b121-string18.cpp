#include<bits/stdc++.h>
using namespace std;
// chua ac
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		vector<pair<char,int> > arr;
		arr.push_back({'@', -1});
		int maxlen = 0; 
		for (int i=0; i<s.length(); ++i){
			arr.push_back({s[i], i});
			while (arr.size()>=3 && arr[arr.size()-3].first=='1' && arr[arr.size()-2].first=='0' && arr[arr.size()-1].first=='0'){
        		arr.pop_back();
            	arr.pop_back();
            	arr.pop_back();
			}
			int tmp = arr.back().second;
			maxlen = max(maxlen, i - tmp);
		}
		
		cout<<maxlen<<endl;
	}
}
