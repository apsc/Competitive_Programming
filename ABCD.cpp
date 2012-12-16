#include<stdio.h>
char str1[1000021],str2[1000021];
int a[4]={0},temp[4],index[4]={0,1,2,3},pos=0,n,t_index[4];

void sort(){
     for(int i=0;i<4;i++){
             for(int j=0;j<3-i;j++){
                     if(temp[j]>temp[j+1]){
                                     int t=temp[j];
                                     temp[j]=temp[j+1];
                                     temp[j+1]=t;
                                     t=t_index[j];
                                     t_index[j]=t_index[j+1];
                                     t_index[j+1]=t;
                     }
             }
     }
}
int isValid(char c,int p){
    if(p==0){if(str1[p]==c)return 0;else return 1;}
    else if(str1[p]==c||str2[p-1]==c)return 0;    
    else return 1;
}
int flag=0;
void best_fit(){
     
     if(flag==1)return;
     if(pos==2*n)flag=1;
     for(int i=0;i<4;i++){
             temp[i]=a[i];
             t_index[i]=index[i];
     }
     sort();
     for(int i=0;i<4;i++){
             //for(int k=0;k<4;k++)printf("temp:%d\tindex:%d\t",temp[k],t_index[k]);
             //printf("\n");
            
             //printf("%c\t",t_index[i]+65);
             
             if((isValid(t_index[i]+65,pos)==0)||a[t_index[i]]==n)continue;
             //printf("%c\t%s\t",t_index[i]+65,str2);
             //printf("\n");
             
             str2[pos]=char(t_index[i]+65);
             pos++;
             if(pos==2*n){flag=1;printf("%s",str2);return;}
             int t1=t_index[i];
             a[t1]++;
             best_fit();
             a[t1]--;
             pos--;
     }
}
int main(){
    scanf("%d",&n);
    scanf("%s",&str1);
    
    for(int i=0;i<(n<<1);i++){
            a[(str1[i]-65)]++;
    }
    best_fit();
    //for(int i=0;i<2*n;i++)
    
    //printf("%s",str2);
    return 0;
}
