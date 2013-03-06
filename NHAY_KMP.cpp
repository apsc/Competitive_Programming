#include<cstdio>
#include<cstring>
using namespace std;
char T[10000010],P[10000010];
int overlap[10000010];
int main()
{
int i,j,n,m;
while((scanf("%d",&m))!=EOF)
{
scanf("%s%s",&P,&T);
n=strlen(T);
m=strlen(P);
overlap[0] = -1;
    for (i = 0; P[i] != '\0'; i++) {
    overlap[i + 1] = overlap[i] + 1;
    while (overlap[i + 1] > 0 &&
           P[i] != P[overlap[i + 1] - 1])
        overlap[i + 1] = overlap[overlap[i + 1] - 1] + 1;
    }
j = 0;
int count=0;
    for (i = 0; i < n; i++)
    for (;;) {      
        if (T[i] == P[j]) { 
        j++;       
        if (j == m) { 
            printf("%d\n",i-m+1);
            count++;
            j = overlap[j];            
        }
        break;
        } else if (j == 0) break; 
        else j = overlap[j];  
        break;
    }
    
    if(count==0)printf("\n");
    //printf("%d\n",count);
    }
    return 0;
}
