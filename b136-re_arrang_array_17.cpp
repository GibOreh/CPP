#include<bits/stdc++.h>
using namespace std;

struct Number{
		int number;
		int time;
	};
int comparator1(int a, int b){
	return (a>b) ? 1:0;
}
int comparator2(Number a, Number b){
	if(a.time == b.time){
		return (a.number > b.number) ? 1:0;
	}
	return (a.time > b.time) ? 1:0;
}
int main(){
	
	int t;
	cin>>t;
	while(t--){
		string n;
		cin>>n;
		vector<int> v;
		for(int i=0; i<n.length(); i++){
			v.push_back(n[i] - '0');
		}
		sort(v.begin(), v.end(), comparator1);
//		if(v.at(0)==0){
//			cout<<0<<endl;
//			continue;
//		}
		
		
		int count=1;
		vector<Number> vChan, vLe;
	
		for(int i=0; i<n.length()-1; i++){
			if(v.at(i) == v.at(i+1)){
				count++;
			} else{
				if(count%2==0){
					Number chan;
					chan.number= v.at(i);
					chan.time= count;
					vChan.push_back(chan);
				} else{
					Number le;
					le.number= v.at(i);
					le.time= count;
					vLe.push_back(le);
				}
				count=1;
			}
		}
		
		if(v.at(n.length()-1) == v.at(n.length()-2)){
			if(count%2==0){
				Number chan;
				chan.number= v.at(n.length()-1);
				chan.time= count;
				vChan.push_back(chan);
			} else{
				Number le;
				le.number= v.at(n.length()-1);
				le.time= count;
				vLe.push_back(le);
			}
		} else{
			Number le;
			le.number= v.at(n.length()-1);
			le.time= count;
			vLe.push_back(le);
		}
		
		sort(vLe.begin(), vLe.end(), comparator2);

		deque<int> dq;
		
		if(!vLe.empty() && vChan.empty()){
			if(vLe.at(0).number==0){
				for(int i=0; i< vLe.at(1).time; i++){
					dq.push_back(vLe.at(1).number);
				}
			} else{
				for(int i=0; i< vLe.at(0).time; i++){
					dq.push_back(vLe.at(0).number);
				}
			}
		} else if(!vLe.empty() && !vChan.empty()){
			for(int i=0; i< vLe.at(0).time; i++){
				dq.push_back(vLe.at(0).number);
			}
		}

		for(int i=vChan.size()-1; i>=0; i--){
			if(vChan.at(0).number==0){
				break;
			}
			for(int j=0; j< (vChan.at(i).time)/2; j++){
				dq.push_back(vChan.at(i).number);
				
				dq.push_front(vChan.at(i).number);
				
			}
		}
		string s="";
		for(int i=0; i<dq.size(); i++){
			s= s+ to_string(dq.at(i));
		}
		cout<<s<<endl;
	}
}
