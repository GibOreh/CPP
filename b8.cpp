#include<iostream>
#include<cmath>
using namespace std;

int timSoThuK(int n, int k){
	int index=0;
	for(int j=2;j<=sqrt(n);j++){
			while (n%j == 0) {
            	n= n/j;
            	index++;
            	if(index==k){
            		return j;
				}
			}
        }
    if(n>1){
       	index++;
        if(index==k){
            return n;
		}
	}
	return -1;
}


int main(){
	int t;
	cin>>t;
	for(int i= 0; i<t; i++){
		int n,k;
		cin>>n>>k;
		cout<<timSoThuK(n, k)<<endl;
	}
}
