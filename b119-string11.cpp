#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
    	string s1, s2;
    	cin>>s1>>s2;
    	int n1= s1.size();
		int n2= s2.size();
    	vector<int> total(256, 0);
    	vector<int> sofar(256, 0);
    	for(int i=0; i<n2; i++){
    		total[s2[i]]++;
		}
        int L = 0;
		 
    	int minL = 0;
    	int count = 0;
    	int min = INT_MAX;
    	for(int i=0; i< n1; i++){
    		if(total[s1[i]] == 0){
    			continue;
			} else{
				sofar[s1[i]]++;
			}
			if(sofar[s1[i]] <= total[s1[i]]){
				count++;
			}
            if(count == n2){
            	while(true){
            		char c = s1[L]; 
                	if(total[c] == 0){
						L++;
					} else if(sofar[c] > total[c]) {
						sofar[c]--;
                    	L++;
                	} else{
                		break;
					}
				}
				if(i - L + 1 < min){
                	min = i - L + 1;
                	minL= L;
            	}
			}
		}
		string res = "-1";
    	if(count == n2){
    		res = s1.substr(minL, min);
		}
        cout<<res<<endl;
	}
}
