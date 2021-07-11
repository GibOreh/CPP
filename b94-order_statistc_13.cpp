#include <bits/stdc++.h>
using namespace std;

int max(int x, int y) { return (x > y) ? x : y; }

int calculate(int ar1[], int ar2[], int m, int n){
    int i = 0, j = 0;
    int result = 0, sum1 = 0, sum2 = 0;
    while (i < m && j < n){
        if (ar1[i] < ar2[j])
            sum1 += ar1[i++];
        else if (ar1[i] > ar2[j])
            sum2 += ar2[j++];
        else{
            result += max(sum1, sum2);
            sum1 = 0, sum2 = 0;
            int temp = i;
            while (i < m && ar1[i] == ar2[j])
                sum1 += ar1[i++];
            while (j < n && ar1[temp] == ar2[j])
                sum2 += ar2[j++];
            result += max(sum1, sum2);
            sum1 = 0, sum2 = 0;
        }
    }
    while (i < m)
        sum1 += ar1[i++];
    while (j < n)
        sum2 += ar2[j++];
    result += max(sum1, sum2);
    return result;
}
// chua accept
int main(){
   int t;
   cin>>t;
   while(t--){
		int m,n;
		cin>>m>>n;
		int a[m], b[n];
		for(int i=0; i<m; i++){
			cin>>a[i];
		}
		for(int i=0; i<n; i++){
			cin>>b[i];
		}
		int result= calculate(a, b, m, n);
//		int i = 0;
//		int j = 0;
//    	int result = 0;
//		int sum1 = 0;
//		int sum2 = 0;
// 		while (i < m && j < n){
//        	if (a[i] < b[j]){
//        		sum1 += a[i++];
//			} else if(a[i] > b[j]){
//				sum2 += b[j++];
//			} else{
//    	        result+= max(sum1, sum2);
//        	    sum1= 0, sum2 = 0;
//            	int temp= i;
//            	while(i<m && a[i]==b[j]){
//            		sum1 += a[i++];
//				}
//                	
//            	while (j < n && a[temp] == b[j]){
//            		sum2 += b[j++];
//				}
//            	result+= max(sum1, sum2);
// 
//            	sum1= 0;
//				sum2= 0;
//        	}
//    	}
//    	while (i < m){
//    		sum1 += a[i++];
//		}
//    	    
//    	while (j < n){
//    		sum2 += b[j++];
//		}
//        	
//    	result+= max(sum1, sum2);
    	cout<<result<<endl;
   }
   
}
