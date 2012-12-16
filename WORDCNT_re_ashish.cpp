#include<stdio.h>
#include<string.h>
 
 
int main()
{
    int t;
    scanf("%d",&t);
    
    getchar();
    while(t!=0)
    {
    char c[20000],c1[20],c2[22];
    gets(c);
    
    int k;
    for(k=0;k<22;k++)
    c2[k]='q';
    c2[k]='\0';
    
    int l=strlen(c),j;
    int a=1,b=0,i=0;
    
    if(c[0]==32)
    i++;
    
    for(;i<=l;i++)
    {
            j=0;
            while((c[i]!=' ')&&(c[i]!='\0'))
            {
                                           c1[j]=c[i];
                                           i++;
                                           j++;
            }
            
            if(!((c[i]==32)&&(c[i-1]==32)))
            {
            c1[j]='\0';
            
            if(strlen(c1)==strlen(c2))
            {
                                a++;
            }
            
            else
            {
                                if(b<a)
                                b=a;
                                a=1;
            }
            
            strcpy(c2,c1);
            }
    }
    
    if(b<a)
    b=a;
         
    printf("%d\n",b);
    t--;
    }
    return 0;
}
