#include<stdio.h>
int tempa[20];
void flip(int j){
              tempa[j]^=1;
              if(j!=0)
              tempa[j-1]^=1;
              if(j!=19)
              tempa[j+1]^=1;
          return;
}
int main(){
    char g;  
    int cntr=0;             
    for(int i=0;i<20;i++){
            scanf("%d",&tempa[i]);
            scanf("%c",&g);
    }
    for(int i=0;i<20;i++){
            if(tempa[i]){
                     flip(i+1);
                     cntr++;
            }
    }
    printf("%d",cntr);

    return 0;    
}
