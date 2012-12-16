/*
ID: dce.aps1
LANG: C++
TASK: friday
*/
//#include<iostream>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
//#include<map>
//using namespace std;
int n;
int m[7]={0};
main(){
       FILE *fin  = fopen ("friday.in", "r");
       FILE *fout = fopen ("friday.out", "w");
              
       //char days[7][20]={"sunday","monday","tuesday","wednesday","thursday","friday","saturday"};
       int a[]={31,28,31,30,31,30,31,31,30,31,30,31};
       int thisYear=1900;
       int temp=0;
       fscanf(fin,"%d",&n);
       //scanf("%d",&n);
       m[0]++;
       int prev=0;
       for(int i=0;i<n;i++){
               
                       if(thisYear%4==0&&thisYear!=2100&&thisYear!=1900&&thisYear!=2200&&thisYear!=2300)
                                                                                             a[1]=29;
                       else a[1]=28;
               
               for(int j=0;j<12;j++){
                       
                       temp=(a[j]+prev)%7;
                       prev=temp;
                       m[prev]++;
                       
                       if(i==n-1&&j==11)m[prev]--;
                       
                       
               }
                       
                       thisYear++;
       }
       //printf("%d %d %d %d %d %d %d",m["saturday"],m["sunday"],m["monday"],m["tuesday"],m["wednesday"],m["thursday"],m["friday"]);
       //printf("%d %d %d %d %d %d %d\n",m[0],m[1],m[2],m[3],m[4],m[5],m[6]);
       fprintf(fout,"%d %d %d %d %d %d %d\n",m[0],m[1],m[2],m[3],m[4],m[5],m[6]);
       exit(0);
}
