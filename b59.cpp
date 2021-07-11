#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int m,s;
	cin>>m>>s;
	int a[m];
	int b[m];
	int sumMax=s;
	int sumMin=s;
	bool ok= false;
	int max=0;
	int min=0;
	
	for(int i=1; i<=9; i++){
		if(sumMax>=i){
			a[0]=i;
			ok= true;
		} 
	}
	if(s>9*m){
		ok= false;
	}
	
	if(ok){
		sumMax-= a[0];
		for(int i=1; i<m; i++){
			for(int j=9; j>=0; j--){
				if(sumMax>=j){
					a[i]=j;
					sumMax-=j;
					break;
				}
			}
		}
		
		
		for(int i=0; i<m; i++){
			b[i]=a[m-1-i];
		}
		if(b[0]==0){
			for(int i=1; i<m; i++){
				if(b[i]>=1){
					b[i]= b[i]-1;
					b[0]=1;
					break;
				}
			}
		}
//		for(int i=0; i<m; i++){
//			max+= a[i]*pow(10,m-1-i);
//			min+= b[i]*pow(10,m-1-i);
//		}
//		cout<<min<<" "<<max;
		for(int i=0; i<m; i++){
			cout<<b[i];
		}
		cout<<" ";
		for(int i=0; i<m; i++){
			cout<<a[i];
		}
		
//		for(int i=m-1; i>=0; i--){
//			for(int j=9; j>=0; j--){
//				if(sumMin>=j){
//					b[i]=j;
//					sumMin-=j;
//					break;
//				}
//			}
//		}
//	
		
	} else {
		cout<<-1<<" "<<-1;
	}
	
	
	
	
	
}
