#include<bits/stdc++.h>
using namespace std;

int n;
int m;
int a[101][101];
int visit[101][101];
bool check(int x,int y){
	if(x>=1 && x<=n && y>=1 && y<=m){
		return true;
	}
	return false;
}
void bfs(pair<int,int> x){
	queue<pair<int,int>> q;
	q.push(x);
	
	visit[x.first][x.second]= 1;
	int X[]= {-1,-1,-1,0,0,1,1,1};
	int Y[]= {-1,0,1,-1,1,-1,0,1};
	while(!q.empty()){
		pair<int,int> temp= q.front();
		q.pop();
		for(int i=0; i<8; i++){
			int u= temp.first +X[i];
			int v= temp.second +Y[i];
			if(check(u,v) && !visit[u][v] && a[u][v]==1){
				visit[u][v]= 1;
				q.push({u,v});
			}
		}
	}
}			
int main(){
	int t;
	cin>>t;
	while(t--){
	    memset(visit,0,sizeof(visit));
	    cin>>n>>m;
	    for(int i=1; i<=n; i++){
		    for(int j=1; j<=m; j++){
		    	cin>>a[i][j];
			}
	    }
	    
	    int count= 0;
	    for(int i=1; i<=n; i++){
	       for(int j=1; j<=m; j++){
	   	        if(a[i][j]==1 && visit[i][j]==0){   
	   	            count++;
	   	            bfs({i,j});
	   	        }
	   	    }
	    }
	    cout<<count<<endl;
	}

}
