#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin>>s;
	int sum1=0;
	for(int i=0; i<s.length(); i++){
		sum1= sum1+ s[i] - '0';
	}
	
	long long n= stoll(s);
	int sum2= 0;
	for(long long i=2; i<=sqrt(n); i++){
		if(n%i==0){
			sum2= sum2+i;
			n= n/i;
			i=2;
		}
	}
	sum2 = sum2 + n;
	if(sum1==sum2){
		cout<<"YES";
	} else{
		cout<<"NO";
	}
}
