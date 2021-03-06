#include<iostream>
#include<cstdio>
#include<list>
#include<vector>
#include<utility>
#include<string.h>
using namespace std;
int n,m,t,visited[101];
int check[101][101];
bool one_deg(list<int> *adj, int src){
	visited[src]=1;
	int i=0;
	list<int> :: iterator it;
	for(it=adj[src].begin();it!=adj[src].end();it++){
		if(visited[*it]==0){
			visited[*it]=1;
			int c=0;
			for(int j=src+1;j<n;j++){
				if(visited[j]==0){
					bool z=one_deg(adj,j);
					c=1;
					if(z==true) return true;
					if(z==false) break;
				}
			}
			if(c==0) return true;
			visited[*it]=0;
		}
	}
	visited[src]=0;
	return false;
}
			

int main(){
	scanf("%d",&t);
	while(t--){
		for(int i=0;i<101;i++) 
			for(int j=0;j<101;j++) check[i][j]=0;
		list<int> *adj;
		scanf("%d%d",&n,&m);
		int i=0;
		adj=new list<int>[n];
		for(i=0;i<m;i++){
			int a,b;
			scanf("%d%d",&a,&b);
				if(check[a-1][b-1]!=1){
				adj[a-1].push_back(b-1);
				adj[b-1].push_back(a-1);
				check[a-1][b-1]=1;
				check[b-1][a-1]=1;
				}
		}
		if(n&1){ printf("NO\n");continue;}
		
		for(i=0;i<101;i++) visited[i]=0;
		
		if(one_deg(adj,0)==true)
		{
			printf("YES\n");
		}
		else 
			printf("NO\n");
	}
	return 0;
}
		
				
