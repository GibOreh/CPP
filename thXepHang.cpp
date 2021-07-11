#include<bits/stdc++.h>
using namespace std;
using pii = pair<int,int>;

//void solve(){
//	int n;
//	cin>>n;
//	vector<pii> a[n];
//	for(auto &i:a){
//		cin>>i.first>>i.second;
//	}
//	sort(begin(a), end(a));
//	long long ans= a[0].first+a[0].second;
//	for(int i=1; i<n; i++){
//		ans= max(1LL*a[i].first, ans)+a[i].second;
//	}
//	cout<<ans;
//}
//int main(){
//	ios::sync_with_stdio(false);
//	cin.tie();
//	solve();
//}

struct Person{
	int checkIn;
	int time;
};

int comparator(Person a, Person b){
	return a.checkIn > b.checkIn? 0:1;
}

int main(){
	
	int n;
	cin>>n;
	Person a[n];
	for(int i=0; i<n; i++){
		cin>>a[i].checkIn;
		cin>>a[i].time;
	}
	sort(a, a+n, comparator);
	
	long long start= a[0].checkIn;
	long long finish=a[0].checkIn+ a[0].time;
	
	for(int i=1; i<n; i++){
		if(a[i].checkIn>=finish){
			start= a[i].checkIn;
		} else{
			start= finish;
		}
		finish= start+a[i].time;
	}
	cout<<finish;
	
}


