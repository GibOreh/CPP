#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string a,b;
		cin>>a>>b;
		int m= a.size();
		int n= b.size();
		if(m==0 || n==0){
			return 0;
		}
		vector<int> result(m+n, 0);
		int index= 0;
		int index_=0;
		for(int i=m-1; i>=0; i--){
			int carry=0;
			int x= a[i] -'0';
			index_= 0;
			for(int j= n-1; j>=0; j--){
				int y= b[j] - '0';
				int sum= x*y + result[index + index_] + carry;
				carry = sum/10;
				result[index+ index_]= sum%10;
				index_++;
			}
			if(carry>0){
				result[index+index_] += carry;
			}
			index++;
		}
		int count= result.size() - 1;
		while(count>=0 && result[count]==0)
		count--;
		
		if(count == -1){
			return 0;
		}
		string s="";
		while(count>=0){
			s+= to_string(result[count--]);
		}
		
		cout<<s<<endl;
	}
}
