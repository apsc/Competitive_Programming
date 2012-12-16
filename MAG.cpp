#include<iostream>
#include<stdio.h>
#include<cstring>
#include<map>
using namespace std;
map<char,int> mapi;
int main(){
    char a[60];
 gets(a);
    while(strcmp(a,"END")!=0){
    map<char,int> mapi;
    int flag=0;
        int temp=strlen(a);
        for(int i=0;i<temp;i++){
                if(a[i]==' ')continue;
                if(mapi[(a[i])]==0)mapi[(a[i])]=1;
                else if(mapi[(a[i])]==1){flag=1;break;}
        
        }
        if(flag==0)
         printf("%s\n",a); 
                              
            //getchar();                  
          gets(a);                    
    }
    
    return 0;
        
}
