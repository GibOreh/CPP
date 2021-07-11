#include <bits/stdc++.h> 
using namespace std; 
  
int main(){ 
	int t;
    cin>>t;
    while(t--){
        string n;
		long long m;
        cin>>n>>m;
        vector<int> v; 
		long long result = 0; 
   		for (int i= 0; i < n.size(); i++) {  
        	result= (result * 10) +  n[i] - '0'; 
        	int temp = result/m; 
        	v.push_back(temp); 
        	result = result % m;         
   		}
        cout<<result<<endl;
    }   
} 
