#include<cstdio>
#include<cstring>
int main(){
    int t,a,b,cntr,flag,j,i;
    char str[11000];
    scanf("%d",&t);
    while(t--){
               cntr=0;flag=0;
               scanf("%s",&str);
               scanf("%d%d",&a,&b);
               i=strlen(str)-1;
               for(j=0;j<=(i>>1);j++){
                                if(str[j]!='/'&&str[j]==str[i-j])continue;
                                if(str[j]!='/'&&str[i-j]!='/'&&str[j]!=str[i-j]){flag=1;break;}
                                else if(str[j]=='/'&&str[i-j]=='/'){
                                     cntr=cntr+2*(a>b?b:a);
                                     str[j]=str[i-j]='a';     
                                }
                                else if(str[j]=='/'){
                                                if(str[i-j]=='a')cntr+=a;
                                                else cntr+=b;
                                                str[j]=str[i-j];
                                }
                                else{
                                     if(str[j]=='a')cntr+=a;
                                     else cntr+=b;
                                     str[i-j]=str[j];
                                }
                                //printf("%d\t%d\n",cntr,j);
                                
               }
               if(flag)
               printf("-1\n");
               else printf("%d\n",cntr);
    }
    
    return 0;    
}
