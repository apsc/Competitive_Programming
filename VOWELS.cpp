#include<stdio.h>
#include<string.h>
//#include<conio.h>
int main(){
    char a[10009];
    scanf("%s",&a);
    int l=strlen(a);
    int cntr=0;
    for(int i=0;i<l;i++){
            if(a[i]=='Y'||a[i]=='U'||a[i]=='O'||a[i]=='E'||a[i]=='I'||a[i]=='A'||a[i]=='y'||a[i]=='u'||a[i]=='o'||a[i]=='e'||a[i]=='i'||a[i]=='a')cntr++;
    }
    printf("%d",cntr);
    //getch();
}
