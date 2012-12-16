#include<stdio.h>
#include<cstring>
int gcd(long long int a,long long b){if(b==0)return a;else return gcd(b,a%b);}
int simplify(long long int a,char b[]){long long int temp=0;
for(int i=0;i<strlen(b);i++){
temp=(temp*10+(b[i]-'0'))%a;
}if(temp==0)return a;a=gcd(temp,a);
return a;
}
int main(){
int t;
scanf("%d",&t);
while(t-- > 0){
long long int a,c=0;
char b[260];
scanf("%lld %s",&a,&b);
       if(a==0){if(strlen(b)>19){printf("%s\n",b);continue;}for(int i=0;i<strlen(b);i++){
                           c=c*10+(b[i]-'0');
                   }printf("%d\n",c);continue;}
              if(strlen(b)>19)
              a=simplify(a,b);
              else{
                   for(int i=0;i<strlen(b);i++){
                           c=c*10+(b[i]-'0');
                   }     
                   if(c==0){printf("%d\n",a);continue;}
                   a=gcd(a,c);
              }              
              printf("%d\n",a);
    }
    return 0;    
}
