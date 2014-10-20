#include<iostream>
#include<vector>
#include<list>
#include<string.h>
int n,m;
int wind[1000005];
using namespace std;
list<int> *adj;
int visit[1000005];
int ans=0;
int val=0,one=0;

bool solve_util(int src,int tcount){
	visit[src]=1;
	if(wind[src]==1) one++;
	list<int>::iterator it;
	int loop=0;
	for(it=adj[src].begin();it!=adj[src].end();it++){
		int v=*it;
		if(!visit[v]){
		loop=1;
		if(solve_util(v,0)==true) tcount++;
		}
	}
	if(tcount>1){  val+=tcount+1; return true;}
	else if(tcount=1){
		if(wind[src]==1){val+=tcount+1; return true;}
		else return true;
	}
	else if(tcount==0) { return false;}
}



void solve(){
	int i;
	for(i=1;i<=n;i++){
		if(!visit[i]){
			val=0;
			int tcount=0;
			one=0;
			bool x=solve_util(i,0);
			//cout<<"solve"<<val<<endl;
			ans+=val;
		}
	}
	cout<<one<<endl;
	//cout<<"ans"<<ans<<endl;
}

int main(){
	cin>>n>>m;
	int i;
	for(i=1;i<=n;i++) cin>>wind[i];
	adj=new list<int>[n+1];
	for(i=1;i<=m;i++) 
	{
		int x,y;
		cin>>x>>y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	solve();
	cout<<ans<<endl;
	return 0;
}
