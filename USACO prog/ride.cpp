/*
ID: dce.aps1
LANG: C++
TASK: ride
*/
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
main(){
       FILE *fin  = fopen ("ride.in", "r");
       FILE *fout = fopen ("ride.out", "w");
       char a[10],b[10];
       fscanf(fin,"%s %s",&a,&b);
       //scanf("%s %s",&a,&b);
       int temp1=1,temp2=1;
       for(int i=0;i<strlen(a);i++){
                                temp1*=((int)a[i]-64);
       }
       for(int i=0;i<strlen(b);i++){
                                temp2*=((int)b[i]-64);
       }
       temp1=temp1%47;
       temp2=temp2%47;
       if(temp1==temp2)fprintf(fout,"GO\n");
       else fprintf(fout,"STAY\n");
       exit(0);
}
