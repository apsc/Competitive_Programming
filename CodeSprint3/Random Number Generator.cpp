#include<stdio.h>
int gcd(int a,int b){
    if(b==0)return a;
    else return gcd(b,a%b);
}
int main(){
    int temp,t,total,a,b,c,cnt,i;
    //double d;
    //printf("%lf\n%f",1/d,1/d);
    scanf("%d",&t);
    while(t--){
          cnt=0;
          scanf("%d%d%d",&a,&b,&c);
          if(c>=a+b){printf("1/1\n");continue;}
          //d=((double)1)/a;
          //e=((double)1)/b;
          a*=1000;b*=1000;c*=1000;
          a--;b--;c--;
          for(i=1;i<a;i++){
              cnt+=c-i;
          }
          total=a*b;
          
          //d=((double)total)/cnt;
          //cnt=c*c;
          //total=b*c+a*c;
          //d=((double)total)/cnt;
          //printf("%d\n",total%cnt);
          //if(total%cnt<10)total-=(total%cnt);
          
                   temp=gcd(cnt,total);
                   cnt/=temp;
                   total/=temp;
          //
          printf("%d/%d\n",cnt,total);
          
    }
    return 0;
}
