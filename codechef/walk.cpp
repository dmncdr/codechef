#include<iostream>
#include<cstdio>
using namespace std;
int main(){	
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[1000001];
		int i=0;
		for(i=0;i<n;i++) cin>>a[i];
		int ma=-999999;
		for(i=n-1;i>=0;i--){
			if(ma<a[i]){ma=a[i]; }
			if(i!=0) ma++;
		}
		cout<<ma<<endl;
	}
	return 0;
}
		
