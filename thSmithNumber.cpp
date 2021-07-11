#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main(){
	long long n;
	cin>>n;
	vector<long long> v;
	int m=n;
	for(long long i=2; i<=sqrt(n)+1; i++ ){
		if(m%i==0){
			m=m/i;
			v.push_back(i);
			i=2;
		}
	}
	int k=n;
	vector<long long> v1;
	while(1){
		long long res= k%10;
		v1.push_back(res);
		if(k>10){
			k=k/10;
		} else{
			break;
		}
	}
	long long sum1=0;
	long long sum2=0;
	vector<long long> v2;
	for(long long i=0; i<v.size(); i++){
		if(v.at(i)>=10){
			long long t= v.at(i);
			while(t>=10){
				long long res= t%10;
				v2.push_back(res);
				t=t/10;
			}
			v2.push_back(t);;
		} else{
			v2.push_back(v.at(i));
		}
	}
	for(long long i=0; i<v2.size(); i++){
	
		sum1= sum1+ v2.at(i);
	}
	for(long long i=0; i<v1.size(); i++){
		
		sum2= sum2+ v1.at(i);
	}
	if(sum1==sum2){
		cout<<"YES";
		
	} else{
		cout<<"NO";
	}
}
