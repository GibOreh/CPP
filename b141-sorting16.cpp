#include<bits/stdc++.h>
using namespace std;

struct Object{
	int number;
	int time;
};

int comparator(Object o1, Object o2){
	if(o1.time == o2.time){
		return (o1.number<o2.number) ? 1:0;
	}
	return (o1.time>o2.time) ? 1:0;
}

int main(){
	
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0; i<n; i++){
			cin>>a[i];
		}
		sort(a, a+n);
		Object obj;
		obj.number= a[0];
		obj.time= 1;
		vector<Object> v;
		v.push_back(obj);
		for(int i=1; i<n; i++){
			if(a[i] != a[i-1]){
				Object o;
				o.number= a[i];
				o.time= 1;
				v.push_back(o);
			} else{
				v.at(v.size()-1).time++;
			}
		}
		sort(v.begin(), v.end(), comparator);
		for(int i=0; i<v.size(); i++){
			for(int j=0; j< v.at(i).time; j++){
				cout<<v.at(i).number<<" ";
			}
		}
		cout<<endl;
	}
}
