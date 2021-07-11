#include<bits/stdc++.h>
using namespace std;

int comparator(int a, int b){
	return a>b? 1:0;
}

int main(){
	int t;
	cin>>t;
	while(t--){
	string s;
	cin>>s;
	deque<char> front;
	deque<char> behind;
	for(int i=1; i<s.length(); i++){
		if(s[i]<s[i-1]){
			for(int m=0; m<i; m++){
				front.push_back(s[m]);
			}
			for(int n= i; n<s.length(); n++){
				behind.push_back(s[n]);
			}
		}
	}
	if(behind.size()==0){
		cout<<-1<<endl;
		continue;
	}
	sort(behind.begin(), behind.end(), comparator);
	for(int i= 0; i<behind.size(); i++){
		if(front.back()>behind.front()){
			int temp= front.back();
			front.pop_back();
			front.push_back(behind.at(i));
			behind.push_back(temp);
			behind.pop_front();
		} else{
			int temp= behind.front();
			behind.pop_front();
			behind.push_back(temp);
		}
	}
	sort(behind.begin(), behind.end(), comparator);
	
	for(int i=0; i<front.size(); i++){
		cout<<front.at(i);
	}
	for(int i=0; i<behind.size(); i++){
		cout<<behind.at(i);
	}
	cout<<endl;
	}
	
}

// 564689
// 549866
