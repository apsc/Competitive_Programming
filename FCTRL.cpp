#include<stdio.h>
#include<conio.h>
int get(int a, int b){
	int temp=1;
	while(b!=0){
		temp*=5;
		b--;
	}
	return(a/temp);
}
int main(){
	int a=0,i=0,cntr=0;
	scanf("%d",&a);
	i=a;
	int temp[a];
	while(a!=0){
		scanf("%d",&temp[a-1]);
		a--;
	}
	a=i;
	
	while(a!=0){
			for(int j=1;get(temp[a-1],j)>0;j++){
			cntr+=get(temp[a-1], j);
		}
		temp[a-1]=cntr;
		cntr=0;
		a--;
	}
	
	a=i;
	while(a!=0){
		printf("%d\n",temp[a-1]);
		a--;
	}
 getch();
 return 0;
}
