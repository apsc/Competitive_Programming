#include<stdio.h>
int main(){
    long int t,i,sum=0,transfer=0,temp=0;
    scanf("%ld",&t);
    while(t!=-1){
                 sum=0;transfer=0;temp=0;
                 int b[t];
                 for(i=0;i<t;i++){
                                scanf("%d",&b[i]);
                                sum+=b[i];
                 }
                 temp=sum/t;
                 if(sum%t!=0){
                              printf("%d\n",-1);                              
                 }
                 
                 else{         
                               for(i=0;i<t;i++){
                                                
                                                if(b[i]>temp)
                                                transfer+=(b[i]-temp);
                               }
                               printf("%ld\n",transfer);
                 }
                 scanf("%ld",&t);
    }
    
    return 0;    
}
