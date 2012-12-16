#include<stdio.h>
int t;
char str[102][102];
int find(int i,int *p,int index){
    int j=index;
    while(1){
             if(j>=t)return -1;
             if(*p==i)break;
             j++;
             p++;
    }
    return j;
}
 
void store_swap()
{
        int i,j,k,l;
        for(l=0;l<2;++l)
                for(i=0;i<t;++i)
                        for(j=0;j<t;++j)
                                if(str[i][j]=='Y')
                                        for(k=0;k<t;++k)
                                                if(str[j][k]=='Y') str[i][k]='Y';
}
 
int main(){
    int k,temp,i,j,a[102],flag=0,x;
    scanf("%d",&t);
    for(i=0;i<t;i++)scanf("%d",&a[i]);
    for(i=0;i<t;i++)scanf("%s",&str[i]);
    store_swap();
    for(k=0;a[k]==k+1;k++);
 
    for(j=k;j<t;j++){
        for(i=1;i<a[j];i++){
              temp=find(i,&a[j],j);
              if(temp==-1)continue;
              if(str[j][temp]=='Y'&&str[temp][j]=='Y'){x=a[j];a[j]=a[temp];a[temp]=x;if(a[j]==1) break;}
        }
    }
    for(i=0;i<t;i++){printf("%d ",a[i]);}
    printf("\n");
    scanf("%d");
    return 0;
}
