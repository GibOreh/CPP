#include<bits/stdc++.h>
using namespace std;

//
//int main(){
//	int m=1e9+7;
//	int t;
//    cin>>t;
//    while(t--){
//    	int n,r;
//        cin>>n>>r;
//		int temp= r>(n-r)?r:n-r;
//		map<int,int> a,b;
//		for(int i=temp+1; i<n+1; i++){
//			if(i==2||i==3){
//				a[i]++;
//				continue;
//			}
//			int index=2;
//			while(index*index<=n){
//				if(i%index==0){
//					a[index]++;
//					i/=index;
//				} else{
//					index++;	
//				} 
//			}
//			if(n>1) a[i]++;
//		}
//		for(int i=2; i<n-temp+1; i++){
//			if(i==2||i==3){
//				b[i]++;
//				continue;
//			}
//			int index=2;
//			while(index*index<=n){
//				if(i%index==0){
//					b[index]++;
//					i/=index;
//				} else{
//					index++;	
//				} 
//			}
//			if(n>1) b[i]++;
//		}
//    }
//
//}
void do_(map<int,int> &a,int n){
	if(n==2||n==3){
		a[n]++;
		return;
	}
	int i=2;
	while(i*i<=n){
		if(n%i==0){
			a[i]++;
			n/=i;
		}
		else i++;
	}
	if(n>1) a[n]++;
}
int main(){
	int m=1e9+7;
	int t;
    cin>>t;
    while(t--){
    	int n,r;
        cin>>n>>r;
		int temp= r>(n-r)?r:n-r;
		map<int,int> a,b;
		for(int i= temp+1; i<n+1; i++){
			do_(a,i);
		}
		for(int i=2; i<n-temp+1; i++){
			do_(b,i);
		}
		long long sum=1;
		for(auto i:a){
			i.second= i.second-b[i.first];
			for(int j=0; j<i.second; j++){
				sum= (sum*i.first) %m;
			}
		}
		cout<<sum<<endl;
    }

}
