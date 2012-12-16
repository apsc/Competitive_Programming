#include<stdio.h>
#include<cstring>
#include<iostream>
char n[10000007];
int main(){
    
    int t;
    scanf("%d",&t);
    char *p;
    while(t-->0)
    {            
            scanf("%s",&n);            
            int temp=strlen(n);
            if(temp==1){printf("%s\n",n);continue;}
            int cntr=0;
           for(int i=temp/2-1;i>=0&&n[i]=='9';i--)cntr++;
            if(cntr==temp/2-1+1){
             p=(char *) malloc(sizeof(char)*temp + 1);
             printf("%d\n",strlen(p));
             int i=0;
             *p='1';;
             for(i=1;i<temp;i++,p++)
             {
                               *p='0';
             }
             
             *p='1';
              printf("%s\n",p);
              continue;
              }
            if(n[temp/2]=='9'){goto there;}
            here:
            for(int i=0;i<temp/2;i++)
            n[temp-1-i]=n[i];
            if(temp%2==0){n[temp/2]=n[temp/2]+1;n[temp/2-1]=n[temp/2-1]+1;}
            else{n[temp/2]=n[temp/2]+1;}
            printf("this%s\n",n);
            if(false){
            there:
            if(n[temp/2]=='9' || n[temp/2-1]=='9' &&n[0]!=9 ){
                          char a[temp+1];
                          int i=temp/2;
                          while(n[i]=='9')i--;
                          {n[i]=n[i]+1;n[temp-i-1]++;}
                          if(temp%2==0){n[temp/2]='0';n[temp/2-1]='0';for(int i=0;i<temp/2;i++)
                          n[temp-1-i]=n[i];printf("%s\n",n);continue;}
                          else{n[temp/2]=n[temp/2]-1;}
                          printf("%s\n",n);
                          goto here;
                          
            }}
                  
                  
    }
    return 0;    
}
