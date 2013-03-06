#include<stdio.h>
#include<cstring>
#include<iostream>
using namespace std;
char expr[101],stack[101];
int index[101],k;
bool check(int start,int end){
     char temp[101];
     int top=0,flag;
     for(int i=1<<k;i>=0;i--){
         flag=0;
         for(int q=0;q<=end;q++)temp[q]=expr[q];
         int cntr=0,t=i;
         while(t>0){
               if(t&1){
                   temp[index[cntr]]='N';
               }
               cntr++;
               t>>=1;
         }
         top=0;
         for(int l=0;l<=end;l++){
               if(temp[l]=='N')continue;
               if(temp[l]=='(')stack[top++]='(';
               else if(temp[l]==')'&&top>0&&stack[top-1]=='(')top--;
               else {flag=1;break;}
         }
         if(flag==0&&top==0)return true;
     }
     return false;
}
int main(){
    int len,t,i,j,num=1;
    string str;
    freopen("input.txt","r",stdin);
    freopen("output1.txt","w",stdout);        
    scanf("%d",&t);
    while(t--){
         
         j=0;k=0;
         getline(cin,str);
         if((str.size())==0)
            getline(cin,str);
         len=str.size();
         for(i=0;i<len;i++){
             if(str[i]=='('||str[i]==')'){
                  if(i>0&&str[i-1]==':')index[k++]=j;
                  expr[j++]=str[i];                  
             }
         }
         bool res=check(0,j-1);
         if(res)printf("Case #%d: YES\n",num);
         else printf("Case #%d: NO\n",num);
         num++;
    }
    return 0;
}
