#include<iostream>
#include<cstdio>
#include<cstring>
using namespace
int main(){
		int t,i,j;
		
		cin>>t;
		while(t--){
				char m[max],w[max];
				cin>>m>>w;
				int l1=strlen(m);
				int l2=strlen(w);
				int count1=0,count2=0,it=0;
					for(i=0;i<l1;i++)
					{
					   char ch=m[i];
					  for(j=it;j<l2;j++){
					  if(ch==w[j]){
					  count1++;
					  it=j+1;
					  break;
					  	}
					  	}
					  			}
					  
		
					
					it=0;
					for(i=0;i<l1;i++)
					{
					   char ch=w[i];
					  for(j=it;j<l2;j++){
					  if(ch==m[j]){
					  count2++;
					  it=j+1;
					  break;
					  	}
					  	}
					  			}
					  	
					  	  
					if(count==l1 || count2=l2)
					printf("YES\n");
					else printf("NO\n");
						}		
					  return 0;}	
					  			
					  
					  			
					  			
					  
					  
					  		
