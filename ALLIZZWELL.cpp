#include<stdio.h>
int flag,m,n,visited[110][110],px[110],py[110],top,cnt,posx[]={-1,-1,-1,0,0,1,1,1},posy[]={-1,0,1,-1,1,-1,0,1};
char temp[110],str[11]={'A','L','L','I','Z','Z','W','E','L','L'},a[110][110];
void find(int xi,int yi){     
     if(cnt==10){flag=1;return;}
     for(int i=0;i<8;i++){
             if(flag)return;
             int xf=xi+posx[i];
             int yf=yi+posy[i];
             if(a[xf][yf]==str[cnt]&&visited[xf][yf]==0&&xf<m&&yf<n){                                 
                                 cnt++;                                 
                                 visited[xf][yf]=1;
                                 find(xf,yf);
                                 visited[xf][yf]=0;                 
                                 cnt--;
             }
             
     }
}
int main(){
    int t;
    
    scanf("%d",&t);
    while(t--){
               flag=0;
               cnt=1;
               top=0;
               scanf("%d%d",&m,&n);
                              
               for(int i=0;i<m;i++){
                       scanf("%s",&temp);
               for(int j=0;j<n;j++){
                       visited[i][j]=0;
                       a[i][j]=temp[j];
                       if(a[i][j]=='A'){px[top]=i;py[top++]=j;}
               }
               }
               
               for(top--;top>=0;top--){
                       int p=px[top];
                       int q=py[top];
                       find(p,q);                       
               }
               if(flag==1)printf("YES\n");
               else printf("NO\n");
               
    }
}
