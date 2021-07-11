//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//	int t;
//	cin>>t;
//	while(t--){
//		int n;
//		int k;
//		cin>>n>>k;
//		int a[n];
//		for(int i=0; i<n; i++){
//			cin>>a[i];
//		}
//		sort(a, a+n);
//		int count=0;
//		int index=n-1;
//		for(int i=0; i<n-1; i++){
//			while(a[i]+a[index] >= k && i<index){	
//				count++;
//				index--;
//			}
//			index=n-1;
//		}
//		cout<<count<<endl;
//	}
//}
#include<bits/stdc++.h>
using namespace std ;
//upper bound
int main()
{
	int t;cin>>t;
	while(t--){
		int n,k;
		cin >> n >> k;
		int a[n];
		
		for(int i = 0 ; i < n ; i++){
			cin >> a[i];
		}
		sort(a,a+n);
		
		long long count = 0;
		for(int i = 0; i < n;i++){
			int it = upper_bound(a+i,a+n,k-a[i]-1) - a;
			//so dau tien > a[i]+k-1

			if(it<0&&it>=n)continue;
			if(it<=i)count--;
			count += (n-it);
			//cout<<it<<endl;
		}
		cout << count << endl;
	}
	return 0;

}
