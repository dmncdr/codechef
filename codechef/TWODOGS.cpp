#include<iostream>
#include<cstdio>
#include<string.h>
#include<cmath>
int a[1000001],hash[1000001];
using namespace std;
int main(){
		int n,k;
		cin>>n>>k;
		int i=0;
		for(i=1;i<=n;i++) cin>>a[i];
		int key=a[1],flag=0;
		int key1=a[n];
		hash[key]=1;
		hash[key1]=1;
		if((key+key1)==k && (key1!=key)){ cout<<"1"<<endl; flag=1;}
		
		if(flag==0){
			for(i=2;i<=n;i++){
				key=a[i];
				key1=a[n-i+1];
				hash[key]=1;hash[key1]=1;
				if(((k-key)>0) && (hash[k-key]) && ((k-key)!=key))
				{ 
				int ans=i;cout<<ans<<endl; flag=1; break;}
				else if( ((k-key1)>0) && (hash[k-key1])   && ((k-key1)!=key1))
				{
				int ans=i;cout<<ans<<endl;flag=1;break;}
				}
		}
		if(flag==0) cout<<"-1"<<endl;
	return 0;
}
		
			
