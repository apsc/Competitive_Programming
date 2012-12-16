#include<stdio.h>
int main(){
    int t,p,l;
    
    scanf("%d",&t);
    while(t--){               
               scanf("%d",&p);
               scanf("%d",&l);
               int rank[l];
               int time[l];
               for(int i=0;i<l;i++){
                       scanf("%d",&rank[i]);
                       time[i]=1;
               }
               
               int min;
               int cntr[l];
               for(int i=0;i<l;i++){
                       cntr[i]=0;
               }
               int max=0;
               while(p>0){
                          min=0;
                          for(int i=1;i<l;i++)
                          {
                                  if(rank[i]*time[i]<time[min]*rank[min])min=i;
                          }                          
                          cntr[min]+=(rank[min]*time[min]);
                          if(cntr[min]>max)max=cntr[min];
                          time[min]++;
                          p--;
                          for(int i=0;i<l;i++){
                                  if(i==min)continue;
                                  if(p==0)break;
                                  if(rank[i]*time[i]<=time[min]*rank[min]){
                                                                           cntr[i]+=(rank[i]*time[i]);
                                                                           if(cntr[i]>max)max=cntr[i];
                                                                           time[i]++;
                                                                           p--;
                                  }
                          }
                          
                          
                          //printf("%d\t%d\t%d\t%d\n",p,min,time[min]*rank[min],cntr[min]);
               }
               
               printf("%d\n",max);
    }
    return 0;
}
