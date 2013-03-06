#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int t,i,cntr;
    char str[209];
    scanf("%d",&t);
    while(t--)
    {
        cntr=0;
        scanf("%s",&str);        
        if(str[0]=='1')
                       cntr+=2;
        if(str[0]=='0')
        {
            for(i=0;i<strlen(str);i++)
            {
                if(str[i]=='1')
                {
                               cntr++;break;
                }
                else
                cntr++;
            }
            for(i=i+1;i<strlen(str);i++)
            { 
                if(str[i]=='0' && str[i+1]=='1')
                {cntr+=1;i++;}
                else if(str[i]=='0')
                cntr+=1;
                else if(str[i]=='1')
                cntr+=1;
            }
        }
        if(str[0]=='1')
        {
            for(i=1;i<strlen(str);i++)
            { 
                if(str[i]=='0' && str[i+1]=='1')
                {cntr+=1;i++;}
                else if(str[i]=='0')
                cntr+=1;
                else if(str[i]=='1')
                cntr+=1;
            }
        }
        printf("%d\n",cntr);
    }
    return 0;
}
