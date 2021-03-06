#include<iostream>
#include<cstdio>
#include<vector>

using namespace std;
int lowerbound(int vec[],int st,int end,int key){
	int mid;
	while(st<end){
		mid=(st+end)/2;
		if(key<vec[mid]){
			st=mid;
			lowerbound(vec,st,end,key);
		}
		else 
		{
			end=mid;
			lowerbound(vec,st,end,key);
		}
	}
	return mid;
}

int lis(int  hash1[],int length){
	int i=0;
	vector<int> vec;
	vec.push_back(hash1[1]);
	
	int last=0;
	for(i=2;i<=length;i++){
	 	if(hash1[i]>=vec[last]){
		vec.push_back(hash1[i]);
		last++;
		}
		else{
			vector<int>::iterator it,ii;
			int ind=0;
			ii=vec.begin()+ind;
			while(1){
			it=lower_bound(ii,vec.end(),hash1[i]);
			ind=it-vec.begin();
			if(vec[ind]==hash1[i] && (ind!=last))
			{
				ind++;
				ii=vec.begin()+ind;
			}
			else if(vec[ind]>hash1[i]) break;
			}
			vec[ind]=hash1[i];
		
		}
	}
	return (last+1);
}
			
int main(){
		int t;
		cin>>t;
		while(t--){
		int n;
		int a[1000001];
		
		cin>>n;
		int i=0;
		for(i=1;i<=n;i++) cin>>a[i];
		
	
	
		int ans=lis(a,n);
	
		
		cout<<ans<<endl;}
	
	return 0;
}


