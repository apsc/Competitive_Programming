/*
ID: dce.aps1
LANG: C++
TASK: gift1
*/
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
main(){
       FILE *fin  = fopen ("gift1.in", "r");
       FILE *fout = fopen ("gift1.out", "w");
       
       int n;
       fscanf(fin,"%d",&n);
       //scanf("%d",&n);
       char name[n][14];
       int a[n];
       for(int i=0;i<n;i++){
               fscanf(fin,"%s",&name[i]);
               //scanf("%s",&name[i]);
               a[i]=0;
       }   
       
       for(int i=0;i<n;i++){
               char temp[14];
               fscanf(fin,"%s",&temp);
               //scanf("%s",&temp);
               int p,q;
               for(int z=0;z<n;z++){
                       if(strcmp(temp,name[z])==0){
                                                   fscanf(fin,"%d %d",&p,&q);
                                                   //scanf("%d %d",&p,&q);
                                                   //if(p==0)continue;
                                                   if(q!=0)
                                                   a[z]+=-1*((int)p/q)*q;
                                                   else a[z]+=0;
                                                   for(int j=0;j<q;j++){
                                                           char temp2[14];
                                                           fscanf(fin,"%s",&temp2);
                                                           //scanf("%s",&temp2);
                                                           for(int k=0;k<n;k++){
                                                                   if(strcmp(temp2,name[k])==0){
                                                                                                a[k]+=p/q;
                                                                   }
                                                                   
                                                           }
                                                   }
                       }
               }
       }
       
       for(int i=0;i<n;i++){
               fprintf(fout,"%s %d\n",name[i],a[i]);        
               //printf("%s %d\n",name[i],a[i]);        
       }
       //getchar();getchar();getchar();
       exit (0);
}
