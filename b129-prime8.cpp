#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
    	int n,p;
    	cin>>n>>p;
    	int x = 0;

    	while (n){
		    n= n/p;
        	x= x+ n;
    	}
    	cout<<x<<endl;
	}
    
}
