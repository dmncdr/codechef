#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct pr{ int freq;char ch;};

int main(){
		int t;
		scanf("%d",&t);
		while(t--){
				int n;
				char seq[26];
				 fflush(stdin);	
				scanf("%s",seq);
				fflush(stdin);	
					char cyp[150001];
					int i=0;
				char chinput=getchar();
				cyp[i]=chinput;
				while(1){
				 chinput=getchar();
				if(chinput=='\n') break;
				cyp[i]=chinput; i++;}
				cyp[i]='\0';
				  
				
				struct pr hash[26];
				for(i=0;i<26;i++) {  hash[i].freq=0; hash[i].ch='*';}
				
				int ln=strlen(cyp);
				for(i=0;i<ln;i++){
						if(cyp[i]>='a' && cyp[i]<='z')
						 { hash[cyp[i]-'a'].freq++; hash[cyp[i]-'a'].ch=cyp[i]; }
						 else if(cyp[i]>='A' && cyp[i]<='Z')
					       {
							hash[cyp[i]-'A'].freq++; hash[cyp[i]-'A'].ch=cyp[i]-'A'+'a';}
						
								 } 

				for(i=0;i<26;i++){ int j=0;
							for(j=0;j<25;j++){
										if(hash[j].freq>hash[j+1].freq){
											int tmp=hash[j].freq;
											hash[j].freq=hash[j+1].freq;
											hash[j+1].freq=tmp;
											 
											char ctmp=hash[j+1].ch;
											hash[j+1].ch=hash[j].ch;
											hash[j].ch=ctmp; }

						if(hash[j].freq==hash[j+1].freq) 
						{ 
						if(hash[j].ch>hash[j+1].ch){
						
						 char utmp=hash[j+1].ch;
						 hash[j+1].ch=hash[j].ch;
						 hash[j].ch=utmp;}
						}
				
						}
					}

			
			//	for(i=0;i<26;i++) { printf("%c ",seq[i]);}
			//	printf("\n");
			//	for(i=0;i<26;i++) { if(hash[i].ch >='a' && hash[i].ch<='z' ) printf("%c ",hash[i].ch); 
			//				 else printf("%c ",'*');}
			//	printf("\n");

			
			 //for(i=0;i<26;i++){ printf("%c ",hash[i].ch);}
			 //printf("\n");
			 //for(i=0;i<26;i++) {printf("%d ",hash[i].freq);}
				//printf("\n");		
	
				int hsi[26]; for(i=0;i<26;i++) hsi[i]=0;
				
				for(i=0;i<26;i++){ hsi[hash[i].ch-'a']=i;}

				fflush(stdin);
			for(i=0;i<ln;i++){
					  if(cyp[i]>='a' && cyp[i]<='z')
					  printf("%c",seq[hsi[cyp[i]-'a']]);
					 else   if(cyp[i]>='A' && cyp[i]<='Z')
					 printf("%c",(seq[hsi[(cyp[i]-'A')]]-'a')+'A');
					  else if(cyp[i]!='\n') printf("%c",cyp[i]); 				
						}
				printf("\n");
				fflush(stdin);
			}
			
			
		return 0;}





		

					
				
				
