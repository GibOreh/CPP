#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
    	cin >> s;
    	vector<int> ans = {1};
		int count = 0;
		for(int i=0; i<s.length(); i++){
			if(s[i]=='I'){
				count= 0;
				int k= ans.size();
				ans.push_back(k+1);
			} else{
				count++;
				int temp= ans.back();
				for(int i= static_cast<int>(ans.size()) -1; i> static_cast<int>(ans.size()) -1 -count; i--){
					ans[i]++;
				}
				ans.push_back(temp);
			}
		}
    	for (int i = 0; i < ans.size(); i++){
        	cout << ans[i];
    	}
    	cout<<endl;
	}

}
