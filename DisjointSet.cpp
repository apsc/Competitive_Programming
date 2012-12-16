#include<stdio.h>
int a[10],weight[10];

void quickFind(int i, int j){
     int p=a[i],q=a[j];
     for(int k=0;k<10;k++){
             if(a[k]==p){
                            a[k]=q;
             }
     }
}
int root(int c){
    while(c!=a[c])c=a[c];
    return c;
}
void quickUnion(int j,int i){
     int p=root(i);
     int q=root(j);
     if(weight[p]>weight[q]){a[q]=p;weight[p]+=weight[q];}
     else{
          a[p]=q;
          weight[q]+=weight[p];
     }
}
void quickUnionUpgrade(int i,int j){}
int main(){
    for(int i=0;i<10;i++){
            a[i]=i;
    }
    int i=0,j;
    scanf("%d%d",&i,&j);
    while(i<10){
                
                quickFind(i,j);
                
                scanf("%d%d",&i,&j);
    }
    
    
    for(int i=0;i<10;i++){
            printf("%d ",a[i]);
    }
    
    for(int l=0;l<10;l++){
            a[l]=l;
            weight[l]=1;
    }
    
    
    
    i=0,j;
    scanf("%d%d",&i,&j);
    while(i<10){
               quickUnion(i,j);
                
                scanf("%d%d",&i,&j);
    }
    
    for(int i=0;i<10;i++){
            printf("%d ",a[i]);
    }
    
    
    
    for(int i=0;i<10;i++){
            a[i]=i;
    }
    i=0,j;
    scanf("%d%d",&i,&j);
    while(i<10){

                quickFind(i,j);
                scanf("%d%d",&i,&j);
    }
    
    return 0;    
}
