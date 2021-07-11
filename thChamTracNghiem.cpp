#include<bits/stdc++.h>
using namespace std;
 //a65 b66 c67 d68


float check(char a[], int n){
	int a101[]={65,66,66,65,68,67,67,65,66,68,67,67,65,66,68};
	int a102[]={65,67,67,65,66,67,68,68,66,66,67,68,68,66,66};
	float count=0;
	if(n==101){
		for(int i=0; i<15; i++){
			if(a101[i]== a[i]){
				count ++;
			}
		}
	} else{
		for(int i=0; i<15; i++){
			if(a102[i]== a[i]){
				count ++;
			}
		}
	}
	
	return count;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		
		char a[15];
		for(int i=0; i<15; i++){
			cin>>a[i];
			
		}
		
		float diem= (float)check(a,n)*10/15;
		cout<< setprecision(2)<< fixed <<diem<<endl;
	}
}
