#include<stdio.h>
#include<cstring>
#include<iostream>
using namespace std;
int main(){
    int cntr,cntr2,len,t,i,num=1,j,flag,flag2,top,flag3;
    char stack[109],expr[109];
    string str;
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);    
    scanf("%d",&t);
    while(t--){         
         cntr=cntr2=j=top=flag=flag2=flag3=0;
         getline(cin,str);
         if((str.size())==0)
            getline(cin,str);
         len=str.size();
         for(i=0;i<len;i++){
             if(i+1<len&&str[i]==':'&&(str[i+1]==')'||str[i+1]=='(')){
                  expr[j++]=str[i++]; 
                  expr[j++]=str[i];
                  flag=1;
             }
             else if(str[i]=='('||str[i]==')'){
                  expr[j++]=str[i];
                  flag3=1; 
             }
         }
         if(flag3==0||j==0){printf("Case #%d: YES\n",num++);continue;}
         if(flag){
             for(i=0;i<j;i++){
                 if(i>0&&expr[i-1]==':'&&expr[i]==')')cntr2--;
                 else if(i>0&&expr[i-1]==':'&&expr[i]=='(')cntr++;                 
                 else if(expr[i]=='('){cntr++;cntr2++;}
                 else if(expr[i]==')'){cntr--;cntr2--;}                 
             }
             if(cntr>=0&&cntr2<=0)printf("Case #%d: YES\n",num++);
             else printf("Case #%d: NO\n",num++);
             continue;
         }
         else{
              for(i=0;i<j;i++){
                 if(expr[i]=='(')stack[top++]='(';
                 else top--;                 
                 if(top<0){printf("Case #%d: NO\n",num++);flag2=1;break;}
             }
         }
         if(flag2)continue;
         else if(top==0)printf("Case #%d: YES\n",num++);
         else printf("Case #%d: NO\n",num++);
    }
    return 0;
}
