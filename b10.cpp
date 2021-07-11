#include <bits/stdc++.h>
using namespace std;

bool compare(string s1, string s2){
    int n1 = s1.length();
	int n2 = s2.length();
 
	if (n2 < n1){
    	return false;
	}

    if (n1 < n2){
    	return true;
	}
    

    for (int i = 0; i < n1; i++)
        if (s1[i] < s2[i]){
        	return true;
		} else if (s1[i] > s2[i]){
			return false;
		}
            
 
    return false;
}
int main(){
	int t;
    cin>>t;
    while(t--){
    	string s1,s2;
		cin>>s1>>s2;
    	if (compare(s1, s2)){
    		swap(s1, s2);
		}
	
    	string str = "";
    	int n1= s1.length();
		int n2= s2.length();
    	reverse(s1.begin(), s1.end());
    	reverse(s2.begin(), s2.end());
    	
    	int index= 0;
    	for (int i= 0; i<n2; i++) { 
        	int sub= ((s1[i] - '0') - (s2[i] - '0') - index);
        	if (sub<0){
            	sub= sub + 10;
            	index= 1;
        	} else{
        		index= 0;
			}
             
        	str.push_back(sub + '0');
    	}
    	for (int i = n2; i < n1; i++) {
        	int sub= ((s1[i] - '0') - index);
        	if (sub<0){
            	sub= sub + 10;
            	index = 1;
        	} else{
        		index = 0;
			}
        	str.push_back(sub + '0');
    	}
    	reverse(str.begin(), str.end());
    	cout<<str<<endl;
	}    
    
}
